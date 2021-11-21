#include <iostream>
#include"StackType.cpp"
using namespace std;

int main()
{
    StackType<int> st;
    if(st.IsEmpty())
    {
       cout<<"Stack is Empty"<<endl;
    }
    st.Push(5);
    st.Push(7);
    st.Push(4);
    st.Push(2);
   if(!st.IsEmpty()){
    cout<<"Stack is not Empty"<<endl;
   }
   if(!st.IsFull()){
    cout<<"Stack is not full"<<endl;
   }

    st.displayStack();

    st.Push(3);

    if(st.IsFull()){
    cout<<endl<<"Stack is full"<<endl;
   }
     st.Pop();
    st.Pop();

    cout << st.Top() << endl;

    return 0;
    return 0;
}
