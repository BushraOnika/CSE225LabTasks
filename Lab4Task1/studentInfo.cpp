#include "studentInfo.h"
#include<iostream>
using namespace std;
studentInfo::studentInfo(){

    cgpa=0;
    id=0;
}
studentInfo::studentInfo(string name_val, int id_val, double cgpa_val){
    name= name_val;
    id=id_val;
    cgpa=cgpa_val;
}


void studentInfo::print(){
    cout << "("<<name<<",  " << id <<",  " << cgpa<<")" ;
}
void studentInfo::Id(int temp){
    id=temp;
}
void studentInfo::Name(string  temp){
    name=temp;
}
void studentInfo::CGPA(double temp){
    cgpa=temp;
}

bool studentInfo :: operator==(studentInfo x)
{
    return (id==x.id);
}
bool studentInfo :: operator!=(studentInfo x2)
{
    return (id!=x2.id);
}
