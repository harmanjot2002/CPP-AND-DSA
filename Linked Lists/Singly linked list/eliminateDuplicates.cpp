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

Node* removeDuplicates(Node* head){
    if(head==NULL)
        return head;
    Node* curr=head->next;
    Node* temp=head;
    while(curr!=NULL){
        if(curr->data==temp->data){
            if(curr->next==NULL)
                temp->next==NULL;
            curr=curr->next;
        }
        else{
            temp->next=curr;
            temp=curr;
            curr=curr->next;
        }
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
    head->next->next=new Node(29);
    head->next->next->next=new Node(29);
    head->next->next->next->next=new Node(29);
    head->next->next->next->next->next=new Node(34);
    head->next->next->next->next->next->next=new Node(34);
    head->next->next->next->next->next->next->next=NULL;
    cout<<"Originally"<<endl;
    printList(head);
    cout<<endl<<"After removal"<<endl;
    removeDuplicates(head);
    printList(head);
    return 0;
}