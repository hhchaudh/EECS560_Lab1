#ifndef DOUBLE_LINKED_LIST_H
#define DOUBLE_LINKED_LIST_H

#include "Node.h"

class DoubleLinkedList
{
public:
    DoubleLinkedList();
    ~DoubleLinkedList();
    void insert(int aValue);
    bool print();
private:
    Node* mFront;
    void recursiveInsert(Node* aNodePtr, int aValue);
    void recursivePrint(Node* aNodePtr);
};
#endif // !DOUBLE_LINKED_LIST_H
