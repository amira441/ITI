#include <iostream>

using namespace std;
#include "LinkedList.h"
//DS ==> Way store Data Memory
//Variable (Primitive Data Structure) ==> int , float ,character,boolean
// (No Primitive) Derivied Array
// Linear DS  ===> Array , Linkedlist , Stack ,Queue
// NOn Linear DS ===> Tree,Hash Table, Graph

//Array :-
     // Fixed Size ==>(Once Created Never Change) Resize [Insert () , Remove(Shifting)]
     // Contiguous Block of Memory ==>
     // Homgonus Same DataType
     // Same Data Type from Different Domain ==> Not Homgonus


//5 Degree Student
//5 Salary Employee
//int arr[10]={};
//int Degree[5]={};
//int Salary[5]={};

/*dict arr={"name":"ali","age":25,"Salary":5000};
struct Employee{
    char

}*/
//-------------------------------------------------------------------
//Disadvantage Heap
//1- Memory Leak
    //int x=5;
    //int * ptr =malloc(sizeof(int)*size);
    //free(ptr);
    //ptr=&x;
// 2-What is Heap Fragmentation
    //|---|  |----|     |-----------|   |

//Array Disadvantage:-
//Contiguous Block of Memory ===> Fixed Size ==> Insert , Remove
//Array Advantage:-
//Contiguous Block of Memory ==> Access Index [Direct Access] [Random Access]

//#define NULL (void *) 0

//    HW==>CPU==>SW
/*
volatile int x=0;
ISR(){
    //ptr=&x;
    if(x==0){
        x=1;
    }
    else{
        x=0;
    }
}
*/


int main()
{
    //Wild Pointer
        //int *ptr; // Pointer(without Initalization) point to Grabage ??
        //Dereference Pointer ???
        /*if(ptr == ???){
            *ptr=5;
        }*/
    //NULL Pointer
    /*
    int *ptr=NULL; // Pointer(with Initalization NULL) point to NULL ??
        //Dereference Pointer ???
        //*ptr=5; ==> Crash
        if(ptr != NULL){
            *ptr=5;
        }
        else{
            printf("Pointer is NULL , Can't Derefence \n");
        }
    */
    //Dangling Pointer ==> Point Deleted Memory
    //RUST
    /*    int * function(){
             int arr[2]={0};
            //static int arr[2];
            //int *arr=malloc();
            return arr;
        }
        int * ptr= function();
    */


    //Node * head , Node * tail ====> Linkedlist
    //Node * Next ,Node * Prev, Data  ====> Node
    //LinkedList ===>head,tail,Consist of Collections of Nodes [Compisition]
    LinkedList mylist;
    LinkedList mylist2;
    mylist.add(3);
    mylist.add(5);
    mylist.add(10);
    mylist.add(3);
    mylist.add(13);
    mylist.display();// 3 5 10 3 13
    cout<<mylist.GetCount()<<endl;;
    mylist.IsertAfter(6,5);
    mylist.display();
    cout<<mylist.GetCount()<<endl;
    mylist.IsertAfter(7,3);
    mylist.display();
    mylist.IsertAfter(30,13);
    mylist.display();
    mylist.IsertAfter(20,9);
    mylist.InsertBefore(0,3);
    mylist.display();
    cout<<mylist.GetCount()<<endl;
    mylist.InsertBefore(0,10);
    mylist.display();
    mylist.InsertBefore(0,30);
    mylist.display();
    cout<<mylist.GetCount()<<endl;
    mylist2.add(3);
    mylist2.IsertAfter(7,3);
    mylist2.display();
    cout<<mylist2.GetDataByIndex(1)<<endl;
    cout<<mylist.GetDataByIndex(10)<<endl;
    cout<<mylist.GetDataByIndex(0)<<endl;
   /* mylist.removeNode(15); //Not Found
    mylist.removeNode(3);
    mylist.display();//5 10 3 13
    mylist.removeNode(3);
    mylist.display();// 5 10 13
    mylist.removeNode(10);
    mylist.display();// 5 13
    mylist.removeNode(13);
    mylist.display();//5
    mylist.removeNode(5);
    mylist.display();//List Empty
    // Node * node=mylist.getNodeUsingData();
    // Loose Coupling ==> if change one Class Doesn't affect another Class
     mylist.add(5);
    if(!mylist.search_using_data(10)){
        cout<<"Not Found"<<endl;
    }else{
        cout<<"Found"<<endl;
    }
*/
    return 0;
}