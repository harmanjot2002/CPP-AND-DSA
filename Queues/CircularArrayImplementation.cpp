#include<iostream>
using namespace std;

struct Queue{
    int* arr;
    int rear;
    int front;
    int size;
    Queue(int n){
        size=n;
        arr=new int[n];
        front=-1;
        rear=-1;
    }

    bool Enqueue(int data){
        if((front==-1 && rear==size-1)||(rear==(front-1)%(size-1))){
            cout<<"Queue is full";
            return false;
        }
        else if(front==-1){
            front=rear=0;
            arr[front]=data;
        }
        else if(rear=size-1 && front!=0){
            rear=0;
            arr[rear]=data;
        }
        else{
            rear++;
            arr[rear]=data;
        }
        return true;
    }  

    int getFront(){
        if(front==rear==-1){
            cout<<"Queue is empty";
        }
        return arr[front];
    }
    
    int getRear(){
        if(front==rear==-1){
            cout<<"Queue is empty";
        }
        return arr[rear];
    }
    
    int Dequeue(){
        if(front==-1){
            cout<<"Queue is empty";
            return -1;
        }
        int ans=arr[front];
        arr[front]=-1;
        if(front==rear){
            front=rear=-1;
        }
        else if(front==size-1){
            front=0;
        }
        else{
            front++;
        }
        return ans;
    }
};

int main(){
    Queue q(3);
    q.Enqueue(7);
    q.Enqueue(4);
    q.Enqueue(9);
    cout<<q.getFront()<<endl;
    cout<<q.getRear()<<endl;
    q.Dequeue();
    cout<<q.getFront()<<endl;
    cout<<q.getRear()<<endl;
    return 0;
}