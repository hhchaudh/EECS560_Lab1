#include "Node.h"

Node::Node(int aValue):mValue(aValue),mNext(nullptr),mPrevious(nullptr)
{
}

int Node::getValue() const
{
    return mValue;
}

void Node::setValue(int aValue)
{
    mValue = aValue;
}

Node* Node::getNext() const
{
    return mNext;
}

void Node::setNext(Node* aNodePtr)
{
    mNext = aNodePtr;
}

Node* Node::getPrevious() const
{
    return mPrevious;
}

void Node::setPrevious(Node* aNodePtr)
{
    mPrevious = aNodePtr;
}

