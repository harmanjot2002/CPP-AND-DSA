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

Node* deleteFirst(Node* head){
    if(head==NULL){
        return NULL;
    }
    if(head->next==head){
        delete head;
        return NULL;
    }
    head->data=head->next->data;
    Node* temp=head->next;
    head->next=head->next->next;
    delete temp;
    return head;
}

void printList(Node* head){
    if(head==NULL)
        return;
    cout<<head->data<<" ";
    for(Node* p=head->next;p!=head;p=p->next){
        cout<<p->data<<" ";
    }
}

int main(){
    Node* head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=new Node(40);
    head->next->next->next->next=head;
    cout<<"Before insertion"<<endl;
    printList(head);
    cout<<endl<<"After insertion"<<endl;
    deleteFirst(head);
    printList(head);
    return 0;
}