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

Node* ReversalByNnodes(Node* head,int k){
    Node* curr=head;
    Node* prev=NULL;
    Node* next;
    int count=0;
    while(curr!=NULL && count<k){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
        count++;
    }
    if(next!=NULL){
        head->next=ReversalByNnodes(next,k);
    }
    return prev;
}

int main(){
    Node* head=new Node(23);
    head->next=new Node(29);
    head->next->next=new Node(34);
    head->next->next->next=new Node(89);
    cout<<"Before reversing"<<endl;
    printList(head);
    cout<<endl;
    head=ReversalByNnodes(head,2);
    cout<<"After reversing"<<endl;
    printList(head);  
    cout<<endl;
    return 0;
}