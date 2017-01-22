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
    bool remove(int aValue);
    void reverse();
private:
    Node* mFront;
    void recursiveInsert(Node* aNodePtr, int aValue);
    void recursivePrint(Node* aNodePtr);
    bool recursiveRemove(Node* aNodePtr, int aValue);
    void recursiveReverse(Node*& aRefNode, Node* currentNode);
};
#endif // !DOUBLE_LINKED_LIST_H
