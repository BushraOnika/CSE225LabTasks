#include <iostream>
#include "QueType.cpp"
using namespace std;
void Print(QueType<int> Q){

    QueType<int> temp;
     int a;
    while(!Q.IsEmpty()){
        Q.Dequeue(a);
        temp.Enqueue(a);
        cout << a << " ";
    }
    cout << endl;
    Q = temp;
}
int main()
{
    QueType<int> q(5);
    if(q.IsEmpty()){
        cout<<"Queue is Empty"<<endl;
    }
    q.Enqueue(5);
    q.Enqueue(7);
    q.Enqueue(4);
    q.Enqueue(2);

    if(!q.IsEmpty()){
        cout<<"Queue is not Empty"<<endl;
    }
    if(!q.IsFull()){
        cout<<"Queue is not Full"<<endl;
    }
    q.Enqueue(6);
     if(q.IsFull()){
        cout<<"Queue is Full"<<endl;
    }
        Print(q);
        try{
         q.Enqueue(8);
        }catch(FullQueue e){
        cout<<"Queue Overflow"<<endl;
        }
        int a=5;
        int b=7;
        q.Dequeue(a);
        q.Dequeue(b);
        Print(q);
        int c=4,d=2,e=6;
        q.Dequeue(c);
        q.Dequeue(d);
        q.Dequeue(e);
        if(q.IsEmpty()){
        cout<<"Queue is Empty"<<endl;
    }
    try{
        int f=1;
        q.Dequeue(f);
    }catch(EmptyQueue e){
         cout<<"Queue Underflow"<<endl;
     }
     QueType<string> qt;
    int n=10;
        string t;
    qt.Enqueue("1");
    for(int i=0;i<n;i++){
        qt.Dequeue(t);
       cout << t << endl;
       qt.Enqueue(t+"0");
       qt.Enqueue(t+"1");
      }
}
