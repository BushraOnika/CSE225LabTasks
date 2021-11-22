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
    cout<<endl;
    st.Push(3);
    st.displayStack();

    if(st.IsFull()){
    cout<<endl<<"Stack is full"<<endl;
   }
     st.Pop();
    st.Pop();

    cout << st.Top() << endl;
    char ch,stackContent;
    StackType<char> st2;
    string inputExpr;
    cin>>inputExpr;
    for (int i=0;i<inputExpr.length();i++){
            ch = inputExpr[i];
            switch (ch){
                case'(':
                    st2.Push(ch);
                    break;
                case ')':

                       st2.Pop();
            }

        }
        if (st2.IsEmpty()){
            cout<<"Balanced";

        }
        else
        cout<<"Not Balanced";



   return 0;
}
