# pragma once

struct Node
{
    int data;
    Node *next;
};

class SinglyLinkedList
{
    public:
        SinglyLinkedList();
        void insert(int value);
        void insertHead(int value);
        void insertAt(int value, int position);
        void remove(int value);
        void removeHead();
        void removeTail();
        void printList();
        bool isEmpty();

    private:
        void insert(int value, Node *node);
        void remove(int value, Node *node);
        Node *head;
};