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
  pid_t pid[10]={0};/*���ÿ���ӽ��̵�id*/
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
}  /*�û�ѡ��ɱ�����̣����ֱ�ʾɱ���ý���,q��ʾ�˳�*/
  printf("������Ҫɱ�����̵ı��(q�˳�):\n");
  while((ch=getchar())!='q')  {
        if(ch - '0' > MAX_CHILD_NUMBER || ch - '0' < 0){
                printf("�������ֲ����ϵ�ǰ���̵ı�ŷ�Χ�ڣ�\n");
        } else if(isdigit(ch)) {
        kill(pid[ch-'0'],SIGTERM);
        }
  }  /*ɱ����������н���*/
  for(i=0;i<=proc_number;i++)  {
   kill(pid[i],SIGTERM);
  }
  kill(0,SIGTERM);
  return;
 }
 void do_something() {
  for(;;)  {
   printf("��ǰ���̱���� No.%d ���Ľ���ID�� %d\n",proc_number,getpid());
   sleep(SLEEP_INTERVAL);
  }
}
