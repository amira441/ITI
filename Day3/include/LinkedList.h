#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "Node.h"

class LinkedList
{
    private:
        Node * head;
        Node * tail;
    public:
        LinkedList()
        {
            head=tail=NULL;
        }
        void add(int data)
        {
            //Create Node
            Node * node = new Node(data); //Create Object Node , Data=data , next,prev=null

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
        void display()
        {
            Node * current =head;//NULL
            if(current == NULL){
                cout<<"Linked List is Empty \n";
                return ;
            }
            while(current != NULL){
                //Display
                cout<<current->data<<"\t";
                //Increment Jump Node
                current=current->Next;
            }
            cout<<endl;
        }
        void Swap(int& x,int& y)
        {
            int temp;
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
                if((current->data)>(next->data))
                {
                    Swap(current->data,next->data);
                    sorted=0;
                }
                current=next;
                next=next->Next;
              }
           }
        }

    protected:


};

#endif // LINKEDLIST_H
