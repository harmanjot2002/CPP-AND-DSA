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

Node* NthNodeFromEnd(Node* head,int n){
    if(head==NULL){
        return NULL;
    }
    Node* first=head;
    for(int i=0;i<n;i++){
        first=first->next;
    }
    Node* second=head;
    while(first!=NULL){
        second=second->next;
        first=first->next;
    }
    cout<<second->data;
}

int main(){
    Node* head=new Node(23);
    head->next=new Node(29);
    head->next->next=new Node(34);
    head->next->next->next=new Node(89);
    printList(head);
    cout<<endl;
    cout<<"Nth node from end is:"<<endl;
    NthNodeFromEnd(head,2);
    return 0;
}