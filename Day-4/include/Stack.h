#ifndef STACK_H
#define STACK_H
#include "Node.h"

class Stack
{
    private:

    public:
        Node* tos;
        Stack() {
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
                newNode->Left=tos;
                tos=newNode;
            }
        }

    protected:


};

#endif // STACK_H
