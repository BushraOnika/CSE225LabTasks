#include <iostream>
#include "UnsortedType.cpp"
using namespace std;
template <class ItemType>
void UnsortedType<ItemType>::printList()
{       while (listData != NULL) {
        cout << listData->info << " ";
        listData = listData->next;

    }
}
int main() {
    UnsortedType<int> m;
    UnsortedType<int> n;
    UnsortedType<int> arr;
    int s;
    //1st list
    cin>>s;
    for (int i = 0; i < s; ++i) {
        int a;
        cin>>a;
        m.InsertItem(a);

    }
    //2nd list
    cin>>s;
    for (int i = 0; i < s; ++i) {
        int a;
        cin>>a;
        n.InsertItem(a);

    }
    n.printList();
}
