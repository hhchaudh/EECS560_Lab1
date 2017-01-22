#include "DoubleLinkedList.h"
#include <iostream>

DoubleLinkedList::DoubleLinkedList():mFront(nullptr)
{
}


DoubleLinkedList::~DoubleLinkedList()
{
    Node* deleter = mFront;
    Node* mover = mFront;

    while(deleter != nullptr)
    {
        mover = mover->getNext();
        delete deleter;
        deleter = mover;
    }

    mFront = nullptr;
}

void DoubleLinkedList::insert(int aValue)
{
    if (mFront == nullptr)
    {
        Node* newNode = new Node(aValue);
        mFront = newNode;
    }
    else
    {
        recursiveInsert(mFront, aValue);
    }
}

void DoubleLinkedList::recursiveInsert(Node* aNodePtr, int aValue)
{
    if(aNodePtr->getNext() == nullptr)
    {
        Node* newNode = new Node(aValue);
        newNode->setPrevious(aNodePtr);
        aNodePtr->setNext(newNode);
    }
    else
    {
        recursiveInsert(aNodePtr->getNext(), aValue);
    }
}

bool DoubleLinkedList::print()
{
    if (mFront == nullptr)
    {
        return false;
    }
    else
    {
        recursivePrint(mFront);
        return true;
    }
}

void DoubleLinkedList::recursivePrint(Node* aNodePtr)
{
    std::cout << aNodePtr->getValue() << " ";
    
    if (aNodePtr->getNext() != nullptr)
    {
        recursivePrint(aNodePtr->getNext());
    }
}

