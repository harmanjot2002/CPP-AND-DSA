#include<bits/stdc++.h>
using namespace std;

struct Queue{
    int* arr;
    int front;
    int rear;
    int size;
    Queue(int c){
        arr=new int[c];
        size=c;
        front=0;
        rear=0;
    }
    bool isEmpty(){
    if(front==rear)
        return true;
    else
        return false;
    }
    void enqueue(int x){
        if(rear==size){
            cout<<"Queue is full";
        }
        else{
            arr[rear]=x;
            rear++;
        }
    }
    int dequeue(){
        if(rear==front)
            return -1;
        else{
            int ans=arr[front];
            arr[front]=-1;
            front++;
            if(front==rear){
                front=0;
                rear=0;
            }
            return ans;
        }
    }
    int getFront(){
        if(front==rear){
            return -1;
        }
        else{
            return arr[front];
        }
    }
};


int main(){
    Queue q(3);
    q.enqueue(7);
    q.enqueue(4);
    q.enqueue(9);
    cout<<q.getFront()<<endl;
    q.dequeue();
    cout<<q.getFront()<<endl;
    return 0;
}