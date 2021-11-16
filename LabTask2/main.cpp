#include <iostream>
#include "dynarr.cpp"
using namespace std;
int main()
{    double number;
    dynarr<int> d(2);
    dynarr<double> d2(5);
     cout<<"Enter the interger element"<<endl;
    for(int i=0;i<2;i++){
        cin>>number;
        d2.setValue(i,number);
    }
    cout<<"Integer Type: ";
    for(int i=0;i<2;i++){

        cout<<d2.getValue(i)<<" ";
    }
    cout<<endl<<"Enter the 5 double elements"<<endl;
    for(int i=0;i<5;i++){
        cin>>number;
        d2.setValue(i,number);
    }
    cout<<"Double Type: ";
    for(int i=0;i<5;i++){

        cout<<d2.getValue(i)<<" ";
    }


    return 0;
}


