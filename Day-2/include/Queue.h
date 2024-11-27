#ifndef QUEUE_H
#define QUEUE_H


class Queue
{
    private:
        int Size;
        int Front;
        int Rear;
        int *items;
    public:
        Queue(int Size)
         {
            this->Size=Size;
            items=new int[Size];
            Front=Rear=-1;
         }
        ~Queue() {}
        int enqueue(int data)
        {
            if(Rear==-1)
            {
                Front++;
                Rear++;
                items[Front]=data;
            }
            else if(Rear==Size-1 && Front!=0)
            {
                items[Front-1]=items[Front];
                Front--;
                Rear--;
            }
            else if(Rear==Size-1 && Front==0)
            {
                return 0;
            }
            else
            {
                items[++Rear]=data;
                return 1;
            }
        }
        int dequeue (int &data)
        {
           if(Rear==-1)
           {
               return 0;
           }
           data=items[Front];
           Front++;
           if(Front>Rear)
                Front=Rear=-1;
        }
        void display()
        {
            int Count=0;
            while(Count<=Rear)
            {
                cout<<items[Count]<<endl;
                Count++;
            }
        }
        int GetFront(int& data)
        {
            if(Front==-1)
                return 0;
            else
            {
                data=items[Front];
                return 1;
            }
        }
        int GetRear(int& data)
        {
            if(Rear==-1)
                return 0;
            else
            {
                data=items[Rear];
                return 1;
            }
        }
    protected:


};

#endif // QUEUE_H
