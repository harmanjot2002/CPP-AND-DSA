#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node* prev;
    Node(int x){
        data=x;
        next=NULL;
        prev=NULL;
    }
};

void printList(Node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}

Node* insertBegin(Node* head,int data){
    Node* temp=new Node(data);
    if(head==NULL){
        return temp;
    }
    temp->next=head;
    head->prev=temp;
    return temp;
}

int main(){
    Node* head=new Node(10);
    Node* temp1=new Node(20);
    Node* temp2=new Node(30);
    head->next=temp1;
    temp1->prev=head;
    temp1->next=temp2;
    temp2->prev=temp1;      
    cout<<"Before insertion"<<endl;    
    printList(head);
    cout<<endl<<"After insertion"<<endl;
    head=insertBegin(head,3);
    printList(head);
    return 0;
}