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

int length(Node* head){
    int count=0;
    Node* curr=head;
    while(curr!=NULL){
        curr=curr->next;
        count++;
    }
    return count;
}

int main(){
    Node* head=new Node(23);
    head->next=new Node(29);
    head->next->next=new Node(34);
    cout<<length(head);
     
    return 0;
}