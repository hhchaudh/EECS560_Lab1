#ifndef NODE_H
#define NODE_H


class Node
{
public:
    Node(int aValue);
    int getValue() const;
    void setValue(int aVal);
    Node* getNext() const;
    void setNext(Node* aNodePtr);
    Node* getPrevious() const;
    void setPrevious(Node* aNodePtr);

private:
    int mValue;
    Node* mNext;
    Node* mPrevious;
};
#endif
