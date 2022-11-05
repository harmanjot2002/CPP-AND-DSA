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

Node* evenAfterOdd(Node* head){
   Node* even=head->next;
   Node* odd=head;
   Node* evenStart=even;
   while(odd->next!=NULL && even->next!=NULL){
    odd->next=even->next;
    odd=odd->next;
    even->next=odd->next;
    even=even->next;
   }
   odd->next=evenStart;
   if(odd->next!=NULL){
    even->next=NULL;
   }
}

int main(){
    Node* head=new Node(23);
    head->next=new Node(29);
    head->next->next=new Node(34);
    head->next->next->next=new Node(89);
    cout<<"Before"<<endl;
    printList(head);
    cout<<endl;
    evenAfterOdd(head);
    cout<<"After after"<<endl;
    printList(head);  
    cout<<endl;
    return 0;
}