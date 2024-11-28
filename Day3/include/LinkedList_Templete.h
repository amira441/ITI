#ifndef LINKEDLIST_TEMPLETE_H
#define LINKEDLIST_TEMPLETE_H
#include "Node.h"

template <typename T>
class LinkedList_Templete
{
    private:
        Node* head;
        Node* tail;
    public:
        LinkedList_Templete()
        {
            head=tail=NULL;
        }
        void add(T data)
        {
            //Create Node
            T* ptr=new T (data);
            Node * node = new Node(ptr);

                if(head == NULL){//First Node
                    head=tail=node;
                    //node->Next=node->prev=NULL;
                }
                else{//Not First Node
                    tail->Next =node; //Old->Next=NewNode
                    node->Prev=tail; //newNode->prev=old(Node)
                    tail=node;//tail=node;
                }
        }
        void Swap(T& x,T& y)
        {
            T temp;
            temp=x;
            x=y;
            y=temp;
        }
        void bubbleSort()
        {

           int sorted=0;
           while(sorted==0)
           {
              Node* current=head;
              Node* next=current->Next;
              sorted=1;
              while(next!=NULL)
              {
                if(current->data>next->data)
                {
                    Swap(current->data,next->data);
                    sorted=0;
                }
                current=next;
                next=next->Next;
              }
           }
        }


};

#endif // LINKEDLIST_TEMPLETE_H
