#include <stddef.h>
#include <iostream>
using namespace std;



struct Node
{
    int index;
    int value;
    Node *next;
    Node *prev;
};

struct Dummy
{
    Node *next;
};

class LinkedList
{
    public:
        LinkedList();
        void insert(int value);
        void insert(int value, int index);

    private:
        void insert(int value,Node *node);
        void insert(int value,int index,Node *node);

        Dummy *head;

};

LinkedList::LinkedList()
{
    head=NULL;

}

void LinkedList::insert(int value,Node *node)
{
    if(node->next!=NULL)
    {
        insert(value,node->next);
    }
    else
    {
        node->next=new Node;
        node->next->value=value;
        node->next->index=node->index+1;
        node->next->prev=node;
    }
    
}

void LinkedList::insert(int value)
{
    if(head==NULL)
    {
        head=new Dummy;
        head->next=new Node;
        head->next->value=value;
        head->next->prev=NULL;
        head->next->next=NULL;

    }
    else
    {
        insert(value,head->next);
    }
    
}

void LinkedList::insert(int value,int index,Node *node)
{
    if(node->index==index)
    {
        if(node->prev==NULL)
        {
            head->next=new Node;
            head->next->value=value;
            node->prev=head->next;
            head->next->prev=NULL;
            head->next->next=node;
        }
        else if (node->next=NULL)
        {
            node->next=new Node;
            node->next->next=NULL;
            node->next->prev=node;
            node->next->value=value;
        }
        else
        {
            Node *newNode;
            newNode= new Node;
            newNode->value=value;
            newNode->next=node->next;
            newNode->prev=node;

            node->next->prev=newNode;
            node->next=newNode;
               
        }
        

    }
    else
    {
        insert(value,index,node->next);
    }
    
}

void LinkedList::insert(int value,int index)
{
    insert(value, index, head->next);
}