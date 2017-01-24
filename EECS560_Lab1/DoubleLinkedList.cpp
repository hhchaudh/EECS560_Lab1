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
    if(aNodePtr->getValue() == aValue)
    {
        return;
    }

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
    if(mFront == nullptr)
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
    
    if(aNodePtr->getNext() != nullptr)
    {
        recursivePrint(aNodePtr->getNext());
    }
}

bool DoubleLinkedList::remove(int aValue)
{
    if(mFront == nullptr)
    {
        return false;
    }
    else
    {
       return recursiveRemove(mFront, aValue);
    }
}

bool DoubleLinkedList::recursiveRemove(Node* aNodePtr, int aValue)
{
    if(aNodePtr == nullptr)
    {
        return false;
    }

    if(aNodePtr->getValue() == aValue)
    {
        Node* currentNode = aNodePtr;
        Node* nextNode = currentNode->getNext();
        Node* previousNode = currentNode->getPrevious();

        if(previousNode)
        {
            previousNode->setNext(nextNode);
        }
        else
        {
            mFront = nextNode;
        }

        if(nextNode)
        { 
            nextNode->setPrevious(previousNode);
        }

        delete currentNode;
        return true;
    }

    recursiveRemove(aNodePtr->getNext(), aValue);
}

void DoubleLinkedList::reverse()
{
    if(!mFront || !(mFront->getNext()))
    {
        return;
    }
    else
    {
        Node* referenceNode = mFront;
        recursiveReverse(referenceNode, mFront);
    }
}

void DoubleLinkedList::recursiveReverse(Node*& aRefNode, Node* currentNode)
{
    int localValue = currentNode->getValue();
    if(currentNode->getNext())
    {
        recursiveReverse(aRefNode, currentNode->getNext());
    }
    aRefNode->setValue(localValue);
    aRefNode = aRefNode->getNext();
}
