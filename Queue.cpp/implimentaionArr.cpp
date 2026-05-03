#include<bits/stdc++.h>
using namespace std;

class myQueue{
private:
    int *arr;
    int size;
    int rear;
    int frontIdx;

public:

    myQueue(){
        size = 100000;
        arr = new int[size];
        rear = 0;
        frontIdx = 0;
    }

    void enqueue(int data){
        if(rear == size){
            cout << "myQueue is full\n";
        } else {
            arr[rear] = data;
            rear++;
        }
    }

    int dequeue(){
        if(rear == frontIdx){
            return -1;
        } else {
            int ans = arr[frontIdx];
            arr[frontIdx] = -1;
            frontIdx++;

            if(rear == frontIdx){
                rear = 0;
                frontIdx = 0;
            }
            return ans;
        }
    }

    bool isEmpty(){
        if(rear == frontIdx) return true;
        return false;
    }

    int getFront(){
        if(rear == frontIdx){
            return -1;
        }
        return arr[frontIdx];
    }
};

int main(){
    myQueue q;

    q.enqueue(10);
    cout << q.dequeue() << endl;
    cout << q.dequeue() << endl;

    q.enqueue(11);
    q.enqueue(112);

    cout << q.getFront() << endl;

    return 0;
}