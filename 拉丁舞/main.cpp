#include <iostream>
#include <string>
using namespace std;
const int K=2;
const int N=20;
class Student{
  string name;
  Student *welcome[K];
  Student *pair;
  public:
      void init(string &name, Student *a, Student *b) {
        this->name=name;
        welcome[0]=a;
        welcome[1]=b;
        pair=NULL;
      }
     void printPair();
     void addPair();
};

void Student::addPair(){
    if(pair == NULL &&
    (this == welcome[0]->welcome[0] || this == welcome[0]->welcome[1] )
    && welcome[0]->pair == NULL)
    {
        pair=welcome[0];
        welcome[0]->pair=this;
        return;
    }
    if(pair == NULL && welcome[0]->pair == NULL &&
      (welcome[0]->welcome[0]->pair != NULL && welcome[0]->welcome[1]->pair != NULL))
    {
        pair = welcome[0];
        welcome[0]->pair=this;
        return;
    }

    if(pair == NULL &&
    (this == welcome[1]->welcome[0] || this == welcome[1]->welcome[1] )
    && welcome[1]->pair == NULL)
    {
        pair=welcome[1];
        welcome[1]->pair=this;
        return;
    }

    if(pair == NULL && welcome[1]->pair == NULL &&
      (welcome[1]->welcome[0]->pair != NULL && welcome[1]->welcome[1]->pair != NULL))
    {
        pair = welcome[1];
        welcome[1]->pair=this;
        return;
    }
}

void Student::printPair(){
    if(this->pair != NULL)
    cout<<this->name<<":"<<this->pair->name<<endl;
}


int main(){
    Student male[N], female[N];
    int m, f, i, j, a, b;
    string name;
    cin>>m;
    for(i=0;i<m;i++){
      cin>>name>>a>>b;
      male[i].init(name, &female[a], &female[b]);
    }
    cin>>f;
    for(i=0;i<f;i++){
      cin>>name>>a>>b;
      female[i].init(name, &male[a], &male[b]);
    }
    for(i=0;i<m;i++) male[i].addPair();
    for(i=0;i<f;i++) female[i].addPair();
    for(i=0;i<m;i++) male[i].printPair();
    return 0;
}
