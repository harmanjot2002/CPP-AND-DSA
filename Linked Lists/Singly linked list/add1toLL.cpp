#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node(int d){
        data=d;
        next=NULL;
    }
};

void printList(Node* head){
    if(head==NULL)
        return;
    cout<<head->data<<" ";
    for(Node* p=head->next;p!=head;p=p->next){
        cout<<p->data<<" ";
    }
}

Node* reverse(Node* head){
    Node* prev=NULL;
    Node* curr=head;
    while(curr!=NULL){
        Node* next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
}

Node* addOne(Node* head){
    head=reverse(head);
    Node* curr=head;
    Node* prev=head;
    int sum=(curr->data) +1;
    curr->data=sum%10;
    int carry=sum/10;
    curr=curr->next;
    while(curr!=NULL){
        sum=(curr->data)+carry;
        curr->data=sum%10;
        carry=sum/10;
        prev=curr;
        curr=curr->next;
    }
    if(carry!=0){
        prev->next=new Node(carry);
    }
    head=reverse(head);
    return head;
}

int main(){
    Node* newNode;
	Node* head1 = new Node(9);
	head1->next = new Node(9);
	head1->next->next = new Node(9);
	head1->next->next->next = NULL;
    newNode=addOne(head1);
    printList(newNode);	
     
    return 0;
}