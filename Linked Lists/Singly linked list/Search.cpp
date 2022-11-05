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

int search(Node* head,int y){
    Node* curr=head;
    int pos=1;
    while(curr!=NULL){
        if(curr->data==y){
           return pos;
        } 
        else{
            pos++;
            curr=curr->next;
        }
    }
    return -1;
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
    printList(head);
    cout<<endl<<search(head,29);
    return 0;
}