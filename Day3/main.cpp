#include <iostream>
#include "Stack.h"
#include "LinkedList.h"

using namespace std;

void SwapArray(int& x,int& y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
}
void Linear_search(int* items,int Size,int Search,Stack& List)
{
    for(int i=0;i<Size;i++)
    {
        if(items[i]==Search)
            List.push(i);

    }

}
void selectionSort(int* items, int Size)
{
    int minIndex=0;
    for(int counter=0; counter<Size-1; counter++ ){
        minIndex=counter;
        for(int index=counter+1; index<Size; index++){
            if(items[index]<items[minIndex]){
                minIndex=index;
            }
        }
     SwapArray(items[counter],items[minIndex]);

    }
}
int Binary_Search(int* items,int Size,int Search)
{
   int Start=0,End=Size-1,mid=0;
   while(Start<=End)
   {
       mid=(Start+End)/2;
       if(items[mid]==Search)
       {
           return mid;
       }
       else if(Search<items[mid])
       {
           End=mid-1;
       }
       else
       {
           Start=mid+1;
       }
   }
    return -1;
}
int main()
{
    int arr[5]={1,2,3,5,6};
    Stack found;
    int x;
    LinkedList mylist;
    LinkedList_Templete<char> mylist2;
    Linear_search(arr,5,7,found);
    if(found.exist())
        found.Display();
    else
        cout<<"Not found"<<endl;
    x=Binary_Search(arr,5,6);
    x==-1?cout<<"Not Found"<<endl:cout<<"Found at index:"<<x<<endl;
    mylist.add(5);
    mylist.add(7);
    mylist.add(1);
    mylist.add(11);
    mylist.add(0);
    mylist.bubbleSort();
    mylist.display();
    return 0;
}
