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

Node* deleteNnodesAfterM(Node* head,int M,int N){
    Node* curr=head;
    Node* temp;
    while(curr){
        for (int i=1;i<M && curr!=NULL;i++){
            curr=curr->next;
        }
        if(curr==NULL){
            return NULL;
        }
        temp=curr->next;
        for(int i=1;i<=N && temp!=NULL;i++){
            temp=temp->next;
        }
        curr->next=temp;
        curr=temp;
    }
    return head;
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
    head->next->next->next=new Node(89);
    cout<<"Before deletion"<<endl;
    printList(head);
    cout<<endl;
    deleteNnodesAfterM(head,1,2);
    cout<<"After deletion"<<endl;
    printList(head);  
    cout<<endl;
    return 0;
}