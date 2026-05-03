#include<bits/stdc++.h>
using namespace std;

class circularQueue{
     int size;
     int *arr;
     int front;
     int rear;

     public :

     circularQueue(){
        size=1000000;
        arr=new int[size];
        front=rear=-1;

     }

     bool isEmpty(){
                if(front ==-1){
            cout<<"Queue is empty \n";
        }

     }

     bool enqueue(int data){
        // check wheather a queue is full or not

        if((front==00 && rear ==size-1) || rear==(front-1)%(size-1)){

            cout<<"queue is false";
            return false;


        }else if(front ==-1){
            // means first element to push
            rear =front=0;
            // arr[front]=data;
        }else if((rear==size-1)&&(front !=0))
        {
            rear=0;
            // arr[rear]=data;
        }else{
            rear++;
            // arr[rear]=data;
        }
        arr[rear]=data;
        

     }

     int dequeue(){
        if(front ==-1){
            cout<<"Queue is empty \n";
        }
        int ans=arr[front];
        arr[front]=-1;

        if(front == rear){
            front=rear=-1;
        }else if(front =size-1){
            front =0;
        }else{
            front++;
        }

        return ans;

     }



};

int main(){
    circularQueue cq;

    
    cq.enqueue(10);
    cq.enqueue(40);
    cq.enqueue(50);

}