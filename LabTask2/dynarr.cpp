#include "dynarr.h"
#include <iostream>

using namespace std;

template<class ItemType>
dynarr<ItemType>::dynarr()
{
    //ctor
    data = NULL;
    size=0;
  //  cout<<"I'm constructor";
}
template<class ItemType>
dynarr<ItemType>::dynarr(int s)
{
    data = new ItemType[s];
    size=s;
}
template<class ItemType>
dynarr<ItemType>::~dynarr()
{
    //dtor
    delete[] data;
}
template<class ItemType>
ItemType dynarr<ItemType>::getValue(int index){
    return data[index];
}
template<class ItemType>
void dynarr<ItemType>::setValue(int index,ItemType value){
    data[index]=value;

}
//task 2
//void dynarr::allocate(int s){

   // data = new int[s];
   // size =s;
//}

