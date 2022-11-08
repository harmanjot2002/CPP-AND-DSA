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

bool isPalindrome(Node *head){
    if(head == NULL) {
        return true;
    }
    Node *curr = head;
    stack<int> st;
    while(curr) {
    	st.push(curr -> data);
        curr = curr -> next;
    }
    curr = head;
    while(curr){
    	if(curr -> data == st.top()){
        	curr = curr -> next;
          	st.pop();
        } 
        else{
        	return false;
        }
    }
    return true;
}

int main(){
    Node* head=new Node(1);
    head->next=new Node(2);
    head->next->next=new Node(3);
    head->next->next->next=new Node(2);
    head->next->next->next->next=new Node(1);
    cout<<isPalindrome(head);
    return 0;
}