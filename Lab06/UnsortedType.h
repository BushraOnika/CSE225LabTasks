#ifndef UNSORTEDTYPE_H
#define UNSORTEDTYPE_H


template <class ItemType>
        class UnsortedType{
        struct NodeType{
            ItemType info;
            NodeType* next;
        };
    public:UnsortedType();
        ~UnsortedType();
        bool IsFull();
        int LengthIs();
        void MakeEmpty();
        void RetrieveItem(ItemType&, bool&);
        void InsertItem(ItemType);
        void DeleteItem(ItemType);
        void ResetList();
        int GetNextItem(ItemType&);
        void printList();
    private:
            NodeType* listData;
            int length;
            NodeType* currentPos;
};


#endif //LAB06_UNSORTEDTYPE_H

//#endif // UNSORTEDTYPE_H
