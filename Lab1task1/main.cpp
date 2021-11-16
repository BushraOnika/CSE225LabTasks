#include <iostream>

using namespace std;

int main(){
    //task1
    int n;
   cout<<"Enter the size:";
    cin>>n;
    int* arr= new int[n];
   for (int i = 0; i < n; ++i) {
       cin>>arr[i];

    }
    cout<< "Showing the elements of the array: ";
    for (int i = 0; i < n; ++i) {
        cout<<arr[i]<<" ";
    }
  delete[] arr;
}
