#include<stdlib.h>
#include<stdio.h> 
#include<sys/types.h>
  #include<unistd.h>
  #include<signal.h>
  #include<ctype.h>
  #define MAX_CHILD_NUMBER 10
  #define SLEEP_INTERVAL 10
  int proc_number=0;
  void do_something();
void main(int argc,char* argv[]) {
  int child_proc_number=MAX_CHILD_NUMBER;
  int i;
  char ch;
  pid_t child_pid;
  pid_t pid[10]={0};/*存放每个子进程的id*/
if(argc>1)  {
   child_proc_number=atoi(argv[1]);
   child_proc_number=(child_proc_number>10)?10:child_proc_number;
  }
  for(i=0;i<child_proc_number;i++)  {
   child_pid=fork();
   if(child_pid==-1)   {
perror("fork");
     } else if(child_pid==0)   {
    proc_number=i;
    do_something();
  }   else
    pid[i]=child_pid;
}  /*用户选择杀死进程，数字表示杀死该进程,q表示退出*/
  printf("请输入要杀死进程的编号(q退出):\n");
  while((ch=getchar())!='q')  {
        if(ch - '0' > MAX_CHILD_NUMBER || ch - '0' < 0){
                printf("您的数字不符合当前进程的编号范围内！\n");
        } else if(isdigit(ch)) {
        kill(pid[ch-'0'],SIGTERM);
        }
  }  /*杀死本组的所有进程*/
  for(i=0;i<=proc_number;i++)  {
   kill(pid[i],SIGTERM);
  }
  kill(0,SIGTERM);
  return;
 }
 void do_something() {
  for(;;)  {
   printf("当前进程编号是 No.%d 它的进程ID是 %d\n",proc_number,getpid());
   sleep(SLEEP_INTERVAL);
  }
}
