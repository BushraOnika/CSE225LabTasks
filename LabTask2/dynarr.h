#ifndef DYNARR_H
#define DYNARR_H

template<class ItemType>
class dynarr
{
    public:
        dynarr();
        dynarr(int);
         ~dynarr();
         void setValue(int,ItemType);
         ItemType getValue(int);
         void allocate(int);

    private:
        ItemType* data;
        int size;
};

#endif // DYNARR_H
