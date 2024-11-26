#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "Node.h"
using namespace std;
class LinkedList
{
    //How Many Node ?
    //Node node;
    //Node node[?????];
    private:
        Node * head;
        Node * tail;
    Node * getNodeUsingData(int data){
        Node *current=head;
        while(current != NULL){
            if(current->Data==data){
                return current;
            }
            //Jump
            current=current->Next;
        }
        return NULL;

    }


    public:
        LinkedList() {
            head=tail=NULL;
        }
        void add(int data){
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
        void display(){
            Node * current =head;//NULL
            if(current == NULL){
                cout<<"Linked List is Empty \n";
                return ;
            }
            while(current != NULL){
                //Display
                cout<<current->Data<<"\t";
                //Increment Jump Node
                current=current->Next;
            }
            cout<<endl;
        }


    void removeNode(int data){
        //Search Linked List
        Node * node = getNodeUsingData(data);
        if(node == NULL){
            cout<<"Element Not Found , Can't Remove \n";
            return;
        }
        else{
            //Remove First
            if(node == head){
                if(node == tail){
                    tail=head=NULL;
                }
                else{
                    head=node->Next;
                    head->Prev=NULL;
                }

            }
            else if (node == tail){ //Remove Last
                tail=node->Prev;
                tail->Next=NULL;
            }
            else{ //Remove Mid
                Node * A=node->Prev;
                Node * B=node->Next;
                A->Next=B;
                B->Prev=A;
            }

            delete(node);

        }

    }

    int search_using_data(int data){
        Node * node = getNodeUsingData(data);
        if(node == NULL){
            return 0;
        }
        else{
            return 1;
        }
    }
    void IsertAfter (int data , int afterdata)
    {
        Node *ptr = getNodeUsingData(afterdata);
        if (ptr!=NULL)
            {
                Node *node=new Node (data);
                if(ptr->Next==NULL)
                {
                    ptr->Next=node;
                    node->Prev=ptr; //the next of node is already points to the next from the constructor
                    tail=node;
                }
                else
                {
                    Node *next=ptr->Next;
                    node->Next=next;
                    node->Prev=ptr;
                    ptr->Next=node;
                    next->Prev=node;

                }
            }
            else
            {
                cout<<"This data is not available"<<endl;
            }
    }
    void InsertBefore (int data,int beforeData)
    {
      Node *ptr = getNodeUsingData(beforeData);
      if (ptr!=NULL)
      {
         Node *node=new Node (data);
         if(ptr->Prev==NULL)
         {
            node->Next=ptr; ///node->prev =null from constructor
            head=node;
         }
         else
         {
             Node* prevNode=ptr->Prev;
             ptr->Prev=node;
             node->Next=ptr;
             node->Prev=prevNode;
             prevNode->Next=node;
         }
      }
      else
      {
          cout<<"This data is not available"<<endl;
      }
    }
    int GetCount()
    {
        int Count=0;
        Node *current= head;
        while(current!=NULL)
        {
           current=current->Next;
           Count++;
        }
        return Count;
    }
    int GetDataByIndex(int index)
    {
        int Count=0;
        Node *current= head;
        while(current!=NULL)
        {
            if(Count!=index)
                {
                    current=current->Next;
                    Count++;
                }
            else
                return current->Data;
        }
        cout<<"Index is not found"<<endl;
        return -1;
    }
    protected:

};

#endif // LINKEDLIST_H
