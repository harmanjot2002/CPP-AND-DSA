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

Node* PairwiseSwap(Node* head){
    Node* curr=head;
    while(curr!=NULL && curr->next!=NULL){
        swap(curr->data,curr->next->data);
        curr=curr->next->next;
    }
}

int main(){
    Node* head=new Node(23);
    head->next=new Node(29);
    head->next->next=new Node(34);
    head->next->next->next=new Node(89);
    cout<<"Before swapping"<<endl;
    printList(head);
    cout<<endl;
    PairwiseSwap(head);
    cout<<"After swapping"<<endl;
    printList(head);  
    cout<<endl;
    return 0;
}