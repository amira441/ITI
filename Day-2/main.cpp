#include <iostream>
#include "Stack.h"
#include "Queue.h"
using namespace std;

int main()
{
    Stack S1;
    Queue Q1(3);
    int data=0;
    S1.push(10);
    S1.push(5);
    cout<<"__________________Stack output___________________"<<endl;
    S1.Display();
    S1.peak(data)?cout<<"The peak value="<<data<<endl:cout<<"Stack is already empty"<<endl;
    S1.pop(data)?cout<<"Pop success"<<endl<<"data="<<data<<endl:cout<<"Pop failure,Stack is empty"<<endl;
    S1.pop(data)?cout<<"Pop success"<<endl<<"data="<<data<<endl:cout<<"Pop failure,Stack is empty"<<endl;
    S1.pop(data)?cout<<"Pop success"<<endl<<"data="<<data<<endl:cout<<"Pop failure,Stack is empty"<<endl;
    S1.peak(data)?cout<<"The peak value="<<data<<endl:cout<<"Stack is already empty"<<endl;
    cout<<"__________________Queue output___________________"<<endl;
    Q1.enqueue(3)?cout<<"Enqueue is done"<<endl:cout<<"Enqueue is Full"<<endl;
    Q1.enqueue(4)?cout<<"Enqueue is done"<<endl:cout<<"Enqueue is Full"<<endl;
    Q1.enqueue(5)?cout<<"Enqueue is done"<<endl:cout<<"Enqueue is Full"<<endl;
    Q1.enqueue(6)?cout<<"Enqueue is done"<<endl:cout<<"Enqueue is Full"<<endl;
    Q1.display();
    Q1.GetFront(data)?cout<<"The front value is ="<<data<<endl:cout<<"Queue is empty"<<endl;
    Q1.GetRear(data)?cout<<"The rear value is ="<<data<<endl:cout<<"Queue is empty"<<endl;
    Q1.dequeue(data)?cout<<"data= "<<data<<endl:cout<<"Queue is empty"<<endl;
    Q1.dequeue(data)?cout<<"data= "<<data<<endl:cout<<"Queue is empty"<<endl;
    Q1.dequeue(data)?cout<<"data= "<<data<<endl:cout<<"Queue is empty"<<endl;
    Q1.dequeue(data)?cout<<"data= "<<data<<endl:cout<<"Queue is empty"<<endl;
    Q1.GetFront(data)?cout<<"The front value is ="<<data<<endl:cout<<"Queue is empty"<<endl;
    Q1.GetRear(data)?cout<<"The rear value is ="<<data<<endl:cout<<"Queue is empty"<<endl;
    return 0;
}
