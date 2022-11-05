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

Node* deleteNnodesAfterM(Node* head,int M,int N){
    Node* curr=head;
    Node* t;
    int count;
    while(curr){
        for (count=1;count<M && curr!=NULL;count++){
            curr=curr->next;
        }
        if(curr==NULL){
            return NULL;
        }
        t=curr->next;
        for(count=1;count<=N && t!=NULL;count++){
            t=t->next;
        }
        curr->next=t;
        curr=t;
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
    deleteNnodesAfterM(head,1,2);
    cout<<"After deletion"<<endl;
    printList(head);  
    cout<<endl;
    return 0;
}