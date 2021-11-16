#include <iostream>
#include "dynarr.h"
using namespace std;

int main()
{
cout << "Enter row & coloumn numbers : " << endl;
   int row,coloum,num;
   cin>>row>>coloum;
   dynarr d(row,coloum);
   for(int i=0;i<row;i++){
    for(int j=0;j<coloum;j++){
        cin>>num;
        d.setValue(i,j,num);
    }
   }
    for(int i=0;i<row;i++){
    for(int j=0;j<coloum;j++){
        cout<<d.getValue(i,j)<<" ";
    }
    cout<<endl;
   }
   d.~dynarr();
    return 0;
}
