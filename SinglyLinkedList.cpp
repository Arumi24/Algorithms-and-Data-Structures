#include <stddef.h>
#include <iostream>
#include <algorithm>
#include "SinglyLinkedList.h"

using namespace std;


SinglyLinkedList::SinglyLinkedList()
{
    head=nullptr;
}

void SinglyLinkedList::insert(int value, Node *node)
{
    if(node->next==nullptr)
    {
        node->next= new Node;
        node->next->data=value;
        node->next->next=nullptr;
    }
    else
    {
        insert(value,node->next);
    }  
}

void SinglyLinkedList::insert(int value)
{
    if(head==nullptr)
    {
        head= new Node;
        head->data=value;
        head->next=nullptr;
    }
    else
    {
        insert(value,head);
    }
}

void SinglyLinkedList::insertHead(int value)
{
    if(head==nullptr)
    {
        head=new Node;
        head->data=value;
        head->next=nullptr;
    }
    else
    {
        Node *node= new Node;

        node->data=value;
        node->next=head;
        head=node;
    }
}

void SinglyLinkedList::insertAt(int value, int position)
{   
    Node *ptr=head;
    int index=1;

    if(position==0)
    {
        insertHead(value);
    }
    else
    {
        while(true)
        {
            if(index==position)
            {   
                Node *node= new Node;

                node->next=ptr->next;
                node->data=value;
                
                ptr->next=node;
                break;
            }
            else
            {   
                if(ptr->next==nullptr)
                {   
                    cout<<"position not available"<<endl;
                    break;
                }
                else
                {
                    ptr=ptr->next;
                }
                
                ptr=ptr->next;
            }  
        }
    }
}

void SinglyLinkedList::remove(int value, Node *node)
{
    if(node->next->data==value)
    {
        node->next=node->next->next;
    }
    else
    {
        remove(value,node->next);
    }  
}

void SinglyLinkedList::remove(int value)
{
    if(head->data==value)
    {
        head=head->next;
        cout<<head->data<<endl;
        cout<<head->next->data<<endl;
    }
    else
    {   
        remove(value,head);
    }
}

void SinglyLinkedList::removeHead()
{
    if(head->next==nullptr)
    {
        head=nullptr;
    }
    else
    {
        head=head->next;
    }
}

void SinglyLinkedList::removeTail()
{
    Node *ptr=head;

    while(true)
    {   
        if (ptr==head && head->next==nullptr)
        {   
            head=nullptr;
            break;
        }
        else if(ptr->next->next==nullptr)
        {
            ptr->next=nullptr;
            break;
        }
        else
        {
            ptr=ptr->next;
        }  
    }
}

bool SinglyLinkedList::isEmpty()
{   
    if(head==nullptr)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}

void SinglyLinkedList::printList()
{   
    Node *ptr=head;

    while(ptr!=nullptr)
    {
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
}

