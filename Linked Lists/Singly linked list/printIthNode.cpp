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

int printIthNode(Node* head,int i){
   Node* curr=head;
   int count=0;
   while(curr!=NULL){
        if(count==i){
            cout<<curr->data;
        }
        else{
            curr=curr->next;
            count++;
        }
   }
}

int main(){
    Node* head=new Node(23);
    head->next=new Node(29);
    head->next->next=new Node(34);
    cout<<printIthNode(head,1);
    return 0;
}