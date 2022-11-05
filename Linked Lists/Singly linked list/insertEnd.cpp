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

Node* insertEnd(Node* head,int x){
    Node* temp=new Node(x);
    if(head==NULL){
        return temp;
    }
    Node* curr=head;
    while(curr->next!=NULL){
        curr=curr->next;
    }
    curr->next=temp;
    return head;
}

Node* printList(Node* head){
    while(head!=NULL){
        cout<<head->data<<"->";
        head=head->next;
    }
    cout<<"NULL";
}

int main(){
    Node* head=NULL;
    head=insertEnd(head,56);
    printList(head);
    return 0;
}