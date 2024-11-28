#ifndef NODE_H
#define NODE_H


class Node
{
    public:
        int data;
        Node* Prev;
        Node* Next;
        Node(int Data)
        {
            Prev=NULL;
            Next=NULL;
            data=Data;
        }
        ~Node() {}

    protected:

    private:
};

#endif // NODE_H
