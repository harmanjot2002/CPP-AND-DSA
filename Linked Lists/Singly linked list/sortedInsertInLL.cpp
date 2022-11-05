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

void printList(Node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}

Node* sorted(Node* head,int x){
    Node* temp=new Node(x);
    if(head==NULL){
        return temp;
    }
    if(x<head->data){
        temp->next=head;
        return temp;
    }
    Node* curr=head;
    while(curr->next!=NULL && curr->next->data<x){
        curr=curr->next;
    }
    temp->next=curr->next;
    curr->next=temp;
    return head;
}

int main(){
    Node* head=new Node(23);
    head->next=new Node(29);
    head->next->next=new Node(34);
    head->next->next->next=new Node(89);
    cout<<"Before inserting"<<endl;
    printList(head);
    cout<<endl;
    head=sorted(head,25);
    cout<<"After inserting"<<endl;
    printList(head);  
    cout<<endl;
    return 0;
}