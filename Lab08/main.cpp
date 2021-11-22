#include <iostream>
#include"StackType.cpp"

using namespace std;

void balanced(string inputExpr){
    char ch, stackContent;
    StackType<char> st2;
    for (int i = 0; i < inputExpr.size(); i++) {
        ch = inputExpr[i];
        switch (ch) {
            case '(':
                st2.Push(ch);
                break;
            case ')':
                if (st2.IsEmpty()) {
                    cout << "Not Balanced";
                    return;
                }
                st2.Pop();
                break;
        }

    }
    if (st2.IsEmpty()) {
        cout << "Balanced";

    } else
        cout << "Not Balanced";

}

int main() {
    StackType<int> st;
    if (st.IsEmpty()) {
        cout << "Stack is Empty" << endl;
    }
    st.Push(5);
    st.Push(7);
    st.Push(4);
    st.Push(2);
    if (!st.IsEmpty()) {
        cout << "Stack is not Empty" << endl;
    }
    if (!st.IsFull()) {
        cout << "Stack is not full" << endl;
    }

    st.displayStack();
    cout << endl;
    st.Push(3);
    st.displayStack();

    if (st.IsFull()) {
        cout << endl << "Stack is full" << endl;
    }
    st.Pop();
    st.Pop();

    cout << st.Top() << endl;



    string inputExpr="(())";
    balanced(inputExpr);

    return 0;
}
