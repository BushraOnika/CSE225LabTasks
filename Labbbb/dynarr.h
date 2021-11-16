#ifndef DYNARR_H
#define DYNARR_H


class dynarr
{
public:
    dynarr();
    dynarr(int,int);
    ~dynarr();
    void setValue(int,int,int);
    int getValue(int,int);
    void allocate(int,int);

private:
    int** data;
    int size;
};

//#endif // DYNARR_H



//#endif //LAB02_DYNARR_H
