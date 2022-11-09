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

Node* sortedMerge(Node* a,Node* b){
    if(a==NULL)
        return b;
    if(b==NULL)
        return a;
    Node* head=NULL;
    Node* tail=NULL;
    if(a->data<b->data){
        head=tail=a;
        a=a->next;
    }
    else{
        head=tail=b;
        b=b->next;
    }
    while(a!=NULL && b!=NULL){
        if(a->data<=b->data){
            tail->next=a;
            tail=a;
            a=a->next;
        }
        else{
            tail->next=b;
            tail=b;
            b=b->next;
        }
    }
    if(a==NULL)
        tail->next=b;
    else
        tail->next=a;
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
    Node* newNode;
	Node* head1 = new Node(10);
	Node* head2 = new Node(3);
	head2->next = new Node(9);
	head2->next->next = new Node(15);
    head2->next->next->next = new Node(30);
	head1->next = new Node(23);
	head1->next->next = new Node(34);
	head1->next->next->next = NULL;
    newNode=sortedMerge(head1,head2);
    printList(newNode);
    return 0;
}