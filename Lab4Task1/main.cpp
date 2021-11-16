#include <iostream>
#include "UnsortedType.cpp"


using namespace std;
int main() {
    bool found;
    int size,number;
    UnsortedType <int> l;
    cout << "Enter 4 numbers : ";
    for(int i=0;i<4;i++)
    {

        cin>>number;
        l.InsertItem(number);
    }

    cout<<endl;
    cout << "Array length is :" << l.LengthIs()<<endl;

    cout << "Enter one more  : ";
    cin>>number;
    l.InsertItem(number);

    cout << "ArrayList is : ";
    for(int i=0;i<l.LengthIs();i++)
    {
        l.GetNextItem(number);
        cout << number << " ";
    }

    cout << endl;

    for(int i=0;i<4;i++)
    {   cout<<"Enter a number for retrieve: ";
        cin>>number;
        l.RetrieveItem(number,found);
        if(found)
            cout << "Item Found" << endl;
        else
            cout << "Item not found " << endl;
    }

    if(l.IsFull())
        cout << "List is full"<<endl;
    else
        cout << "List is not full"<<endl;

    cout << "Delete an item from the list :";
    cin>> number;
    l.DeleteItem(number);

    if(l.IsFull())
        cout << "List is full"<<endl;
    else
        cout << "List is not full"<<endl;
    for(int i=0;i<2;i++)
    {
        cout << "Delete an item from the list :";
        cin>> number;
        l.DeleteItem(number);
        cout << "After deleting Arraylist is: ";
        l.ResetList();
        for(int i=0;i<l.LengthIs();i++)
        {
            l.GetNextItem(number);
            cout << number << " ";
        }
        cout << endl;
    }


    return 0;
}
