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

Node* delFirst(Node* head){
    if(head==NULL)
        return NULL;
    Node* temp=head->next;
    delete head;
    return temp;
}

Node* delGiven(Node* head,int k){
    if(head==NULL)
        return head;
    if(k==1)
        return delFirst(head);
    Node* curr=head;
    for(int i=0;i<k-2;i++)
        curr=curr->next;
    Node* temp=curr->next;
    curr->next=curr->next->next;
    delete temp;
    return head;
}

void printList(Node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}

int main(){
    Node* head=new Node(23);
    head->next=new Node(29);
    head->next->next=new Node(34);
    head->next->next->next=new Node(89);
    cout<<"Before deletion"<<endl;
    printList(head);
    cout<<endl;
    head=delGiven(head,2);
    cout<<"After deletion"<<endl;
    printList(head);  
    cout<<endl;
    return 0;
}