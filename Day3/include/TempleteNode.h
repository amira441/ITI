#ifndef TEMPLETENODE_H
#define TEMPLETENODE_H

template <typename T>
class TempleteNode
{
    public:
        T* data;
        Node* Prev;
        Node* Next;
        Node(T Data)
        {
            Prev=NULL;
            Next=NULL;
            *data=Data;
        }
    protected:

    private:
};

#endif // TEMPLETENODE_H
