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

Node* insertBegin(Node* head,int x){
    Node* temp=new Node(x);
    temp->next=head;
    return temp;
}

Node* printList(Node* head){
    Node* curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
}

int main(){
    Node* head=NULL;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        head = insertBegin(head,x);
    }
    printList(head);     
    return 0;
}