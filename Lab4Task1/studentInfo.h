#ifndef STUDENTINFO_H
#define STUDENTINFO_H


#include<iostream>
using namespace std;

class studentInfo {
public:
    studentInfo();
    studentInfo(string, int , double );
    void print();
    void Id(int);
    void Name(string);
    void CGPA(double);
    bool operator ==(studentInfo);
    bool operator!=(studentInfo);

private:
    string name;
    int id;
    double cgpa;
};


#endif // STUDENTINFO_H
