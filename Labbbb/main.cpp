#include <iostream>
#include "dynarr.h"
using namespace std;

int main()
{
   // cout << "Hello world!" << endl;
   int row,coloum,num;
   cin>>row>>coloum;
   dynarr d(row,coloum);
   for(int i=0;i<row;i++){
    for(int j=0;j<coloum;j++){
        cin>>num;
        d.setValue(i,j,value);
    }
   }
    for(int i=0;i<row;i++){
    for(int j=0;j<coloum;j++){
        cout<<d.getValue(i,j)<<" ";
    }
   }
   d.~dynarr();
    return 0;
}
