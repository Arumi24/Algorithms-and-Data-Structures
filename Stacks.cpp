#include <stddef.h>
#include <iostream>
#include <algorithm>
using namespace std;
#include "SinglyLinkedList.h"
#include "Stack.h"


bool Stack::isEmpty()
{
    if(stack.isEmpty()==true)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void Stack::push(int value)
{
    stack.insertHead(value);
}

void Stack::pop()
{
    stack.removeHead();
}

void Stack::pop(int value)
{   
    for(int i=0;i<value;i++)
    {
        stack.removeHead();
    }
}

void Stack::printStack()
{
    stack.printList();
}

int main()
{
    Stack stack;

    stack.push(10);
    stack.push(5);
    stack.push(4);

    stack.printStack();
    cout<<endl;

    stack.pop();

    stack.printStack();
    cout<<endl;
}