
#include "SinglyLinkedList.h"

class Stack
{
    public:
       
        void push(int value);
        void pop();
        void pop(int amount);
        bool isEmpty();
        void printStack();

    private:
        SinglyLinkedList stack;
};


