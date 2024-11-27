#ifndef STACK_H
#define STACK_H
#include "Node.h"
using namespace std;

class Stack
{
    private:
        Node* tos;
    public:
        Stack()
        {
         tos=NULL;
        }
        ~Stack() {}
        void push(int data)
        {
            Node* newNode=new Node(data);
            if(tos==NULL)
            {
              tos=newNode;
            }
            else
            {
                newNode->Prev=tos;
                tos=newNode;
            }
        }
        int pop(int& data)
        {
            if(tos==NULL)
                return 0;
            Node *temp =tos;
            tos=tos->Prev;
            data=temp->data;
            delete temp;
            return 1;

        }
        int peak(int &data)
        {
            if(tos==NULL)
                return 0;
             data=tos->data;
             return 1;
        }
        void Display()
        {
            Node* current=tos;
            while (current!=NULL)
            {
                cout<<current->data<<endl;
                current=current->Prev;
            }

        }

    protected:
};

#endif // STACK_H
