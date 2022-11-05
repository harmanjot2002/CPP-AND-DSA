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

Node* delEnd(Node* head){
    if(head==NULL)
        return NULL;
    if(head->next==NULL){
        delete head;
        return NULL;
    }
    Node* curr=head;
    while(curr->next->next!=NULL){
        curr=curr->next;
    }
    delete curr->next;
    curr->next=NULL;
    return head;
}

int main(){
    Node* head=new Node(23);
    head->next=new Node(29);
    head->next->next=new Node(34);
    cout<<"Before deletion"<<endl;
    printList(head);
    cout<<endl;
    head=delEnd(head);
    cout<<"After deletion"<<endl;
    printList(head);  
    cout<<endl;
    return 0;
}