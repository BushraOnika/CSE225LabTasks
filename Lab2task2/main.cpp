#include <iostream>

using namespace std;

int main()
{
    //task 2
            int r,c;
            cin>>r>>c;
            char** arr2=new char *[r];
    for (int i = 0; i < r; ++i) {
        arr2[i]=new char[c];
        for (int j = 0; j < c; ++j) {
            cin>>arr2[i][j];

        }

    }
    for (int i = 0; i <r; ++i) {
        for (int j = 0; j <c; ++j) {
            cout << arr2[i][j];
        }
        cout<<endl;
    }
    delete[] arr2;
}
