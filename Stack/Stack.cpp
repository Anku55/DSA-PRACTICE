#include<stack>
#include<iostream>
using namespace std;
class Stack{
    public:

    // data memberss
    int *arr;
    int size;
    int top;
    Stack(int size){
        this->size=size;
        arr= new int[size];
        top=-1;

    }

    void push(int element){
        if(size-top >1){
            top++;
            arr[top]=element;
        }else{
            cout<<" Stack overflow "<<endl;
        }
    }

    void pop(){
        if(top>=0){
            top--;

        }else{
            cout<<" stack underflow"<<endl;
        }

    }

    int peek(){
        if(top>=0){
            return arr[top];
        }else{
            cout<<"stack is empty "<<endl;

            return -1;
        }
    }

    bool isEmpty(){
        if(top==-1){
            return true;
        }

        return false;

    }


};

int main(){

    Stack st(5);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    st.push(20);
    



    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    st.pop();
   
}