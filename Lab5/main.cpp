#include <iostream>
#include "SortedType.cpp"
using namespace std;

int main()
{
     bool found;
    int num;
    SortedType <int> l;
    cout << "length of the list is : "<< l.LengthIs()<<endl;
    cout << "Insert five items:  "<<endl;
    for(int i=0;i<5;i++)
    {
    cin>>num;
    l.InsertItem(num);
    }

    cout << "Sorted List is:  ";
    for(int i=0;i<l.LengthIs();i++)
    {
        l.GetNextItem(num);
        cout << num << " ";
    }

    cout << endl;
    cout << "Retrieve a number: "<< endl;

        cin>>num;
        l.RetrieveItem(num,found);
        if(found)
            cout << "Item Found" << endl;
        else
            cout << "Item not found " << endl;
    if(l.IsFull())
        cout << "List is full"<<endl;
    else
        cout << "List is not full"<<endl;

    cout << "Delete an item from the list :";
    cin>> num;
    l.DeleteItem(num);
    l.ResetList();
    cout<<"After Deleting a number the list is : ";
    for(int i=0;i<l.LengthIs();i++)
    {
        l.GetNextItem(num);
        cout << num << " ";
    }
    cout << endl;
    if(l.IsFull())
        cout << "List is full"<<endl;
    else
        cout << "List is not full"<<endl;
    return 0;
}
