#include<iostream>
using namespace std;

struct Deque{
    int* arr;
    int rear;
    int front;
    int size;
    Deque(int n){
        size=n;
        arr=new int[size];
        rear=front=-1;
    }
    
    bool push_back(int data){
        if((front==0 && rear==size-1) || (rear==(front-1)%(size-1))){
            cout<<"Queue is full"<<endl;
            return false;
        }
        else if(rear==-1){
            front=rear=0;
            arr[rear]=data;
        }
        else if(rear==size-1 && front!=0){
            rear=0;
            arr[rear]=data;
        }
        else{
            rear++;
            arr[rear]=data;
        }
        return true;
    }

    bool push_front(int data){
        if((front==0 && rear==size-1) || (rear==(front-1)%(size-1))){
            cout<<"Queue is full"<<endl;
            return false;
        }
        else if(front==-1){
            front=rear=0;
            arr[front]=data;
        }
        else if(front==0){
            front=size-1;
            arr[front]=data;
        }
        else{
            front--;;
            arr[front]=data;
        }
        return true;
    }

    int pop_front(){
        if(front==-1){
            cout<<"Queue is empty";
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

    int pop_back(){
        if(front==-1){
            cout<<"Queue is empty";
        }
        int ans=arr[rear];
        arr[rear]=-1;
        if(front==rear){
            front=rear=-1;
        }
        else if(rear==0){
            rear=size-1;
        }
        else{
            rear--;
        }
        return ans;
    }

    int getFront(){
        if(front==-1){
            cout<<"Queue is empty";
            return -1;
        }
        else{
            return arr[front];
        }
    }

    int getRear(){
        if(front==-1){
            cout<<"Queue is empty";
            return -1;
        }
        else{
            return arr[rear];
        }
    }
};


int main(){
    Deque q(5);
    q.push_back(7);
    q.push_front(4);
    q.push_back(9);
    q.push_front(2);
     q.push_back(8);
    cout<<q.getFront()<<endl;
    cout<<q.getRear()<<endl;
    q.pop_front();
    cout<<q.getFront()<<endl;
    q.pop_back();
    cout<<q.getRear()<<endl;
    return 0;
}