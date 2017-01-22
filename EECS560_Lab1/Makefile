lab1: main.o Node.o DoubleLinkedList.o
	g++ -std=c++11 -g -Wall main.o Node.o DoubleLinkedList.o -o lab1

main.o: main.cpp
	g++ -std=c++11 -g -Wall -c main.cpp

DoubleLinkedList.o: DoubleLinkedList.h DoubleLinkedList.cpp
	g++ -std=c++11 -g -Wall -c DoubleLinkedList.cpp

Node.o: Node.h Node.cpp
	g++ -std=c++11 -g -Wall -c Node.cpp

clean:
	rm *.o lab1
	echo clean done
