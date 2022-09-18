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

Node* delGiven(Node* head,int pos){
    if(head==NULL)
        return head;
    int count=1;
    Node* temp=head;
    if(pos==1){
        head=temp->next;
        delete temp;
        return head;
    }
    while(temp!=NULL && count<pos-2){
        temp=temp->next;
        count++;
    }
    if(temp!=NULL){
        Node* a=temp->next;
        Node* b=a->next;
        temp->next=b;
        delete a;
    }
    return head;
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