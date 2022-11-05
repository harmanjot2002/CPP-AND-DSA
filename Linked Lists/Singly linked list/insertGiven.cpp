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

Node* insertPos(Node* head,int pos,int data){
    Node* temp=new Node(data);
    if(pos==1){
        temp->next=head;
        return temp;
    }
    Node* curr=head;
    for(int i=1;i<=pos-2 && curr->next!=NULL;i++){
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
    head=insertPos(head,2,12);
    printList(head);
    return 0;
}