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

        int exist()
        {
            if(tos==NULL)
                return 0;
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
