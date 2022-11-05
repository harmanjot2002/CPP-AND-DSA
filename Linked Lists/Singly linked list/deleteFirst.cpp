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

Node* printList(Node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}

int main(){
    Node* head=new Node(23);
    head->next=new Node(29);
    head->next->next=new Node(34);
    cout<<"Before deletion"<<endl;
    printList(head);
    cout<<endl;
    head=delFirst(head);
    cout<<"After deletion"<<endl;
    printList(head);  
    cout<<endl;
    return 0;
}