#ifndef NODE_H
#define NODE_H


class Node
{
    public:
        int data;
        Node* Prev;
        Node(int Data)
        {
            Prev=NULL;
            data=Data;
        }
        ~Node() {}

    protected:

    private:
};

#endif // NODE_H
