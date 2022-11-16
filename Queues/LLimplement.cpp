#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node(int x){
        data=x;
        next=NULL;
    }
};

struct Queue{
    Node* front;
    Node* rear;
    int size;
    Queue(){
        front=NULL;
        rear=NULL;
        size=0;
    }
    
    void enqueue(int x){
        Node* temp=new Node(x);
        size++;
        if(front==NULL){
            front=rear=temp;
            return;
        }
        rear->next=temp;
        rear=temp;
    }

    int dequeue(){
        if(front==NULL)
            return NULL;
        size--;
        Node* temp=front;
        front=front->next;
        if(front==NULL)
            rear=NULL;
        delete temp;
    }
    
    int getFront(){
        if(front==NULL){
            cout<<"Queue is empty";
            return -1;
        }
        else{
            return front->data;
        }
    }

    int getRear(){
        if(front==NULL){
            cout<<"Queue is empty";
            return -1;
        }
        else{
            return rear->data;
        }
    }
};

int main(){
    Queue q;
    q.enqueue(7);
    q.enqueue(4);
    q.enqueue(9);
    cout<<q.getFront()<<endl;
    cout<<q.getRear()<<endl;
    q.dequeue();
    cout<<q.getFront()<<endl;
    cout<<q.getRear()<<endl;    
    return 0;
}