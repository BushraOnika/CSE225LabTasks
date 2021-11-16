//
// Created by User on 10/25/2021.
//
#include <iostream>
#include "dynarr.h"
#include <iostream>

using namespace std;

dynarr::dynarr()
{
    //ctor
    data = NULL;
    size=0;
   // cout<<"I'm constructor";
}
dynarr::dynarr(int r,int c)
{
    data = new *int[r];
    size=r*c;
      for (int i = 0; i < r; ++i) {
        data[i] = new int[c];
    }
}
dynarr::~dynarr()
{
    //dtor
    delete[] data;
}
int dynarr::getValue(int r ,int c){
    return data[r][c];
}
void dynarr::setValue(int r,int c,int value){
    data[r][c]=value;

}
//task 3
void dynarr::allocate(int r,int c){

    data = new *int[r];
    size=r*c;
      for (int i = 0; i < r; ++i) {
        data[i] = new int[c];

}
}
