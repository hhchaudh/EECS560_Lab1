// EECS560_Lab1.cpp : Defines the entry point for the console application.
//

#include "DoubleLinkedList.h"
#include <iostream>

int main()
{
    DoubleLinkedList myList = DoubleLinkedList{};
    myList.insert(5);
    myList.insert(5);
    myList.insert(10);
    myList.insert(15);
    myList.insert(10);
    //myList.remove(15);
    myList.reverse();

    if (!myList.print())
    {
        std::cout << "List is empty";
    }
    std::cout << "\n";
    return 0;
}

