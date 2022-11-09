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

// Node* NthNodeFromEnd(Node* head,int n){
//     if(head==NULL){
//         return NULL;
//     }
//     Node* first=head;
//     for(int i=0;i<n;i++){
//         first=first->next;
//     }
//     Node* second=head;
//     while(first!=NULL){
//         second=second->next;
//         first=first->next;
//     }
//     cout<<second->data;
// }

Node* NthNodeFromEnd(Node* head,int n){
    int len=0;
    Node* curr=head;
    while(curr!=NULL){
        curr=curr->next;
        len++;
    }
    if(len<n){
        return NULL;
    }
    curr=head;
    for(int i=1;i<len-n+1;i++)
        curr=curr->next;
    cout<<(curr->data);
}

void printList(Node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}

int main(){
    int n=2;
    Node* head=new Node(23);
    head->next=new Node(29);
    head->next->next=new Node(34);
    head->next->next->next=new Node(89);
    printList(head);
    cout<<endl;
    cout<<"Nth node from end where N is "<<n<<" is: ";
    NthNodeFromEnd(head,n);
    return 0;
}