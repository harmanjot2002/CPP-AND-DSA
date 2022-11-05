// CPP program to print intersection of lists
#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node(int x){
        data=x;
        next=NULL;
    }
};

Node* reverse(Node* head){
    Node* prev=NULL;
    Node* curr=head;
    while(curr!=NULL){
        Node* next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
} 

void insertAtTail(Node* head,Node* tail,int val){
    Node* temp=new Node(val);
    if(head==NULL){
        head=temp;
        tail=temp;
        return;
    }
    else{
        tail->next=temp;
        tail=temp;
    }
}

Node* add(Node* first,Node* second){
    int carry=0;
    Node* ansHead=NULL;
    Node* ansTail=NULL;
    while(first!=NULL || second!=NULL || carry!=0){
        int val1=0;
        if(first!=NULL)
            val1=first->data;
        int val2=0;
        if(second!=NULL)
            val2=second->data;
        int sum=carry+val1+val2;
        int digit=sum%10;
        insertAtTail(ansHead,ansTail,digit);
        carry=sum/10;
        if(first!=NULL)
            first=first->next;
        if(second!=NULL)
            second=second->next;
    }
    return ansHead;
}

Node* addTwoLists(Node* first,Node* second){
    first=reverse(first);
    second=reverse(second);
    Node* ans=add(first,second);
    ans=reverse(ans);
    return ans;
}

void print(Node* node)
{
	if (node == NULL)
		cout << "NULL";
	while (node->next != NULL) {
		cout << node->data << "->";
		node = node->next;
	}
	cout << node->data;
}

int main(){
	Node* newNode;
	Node* head1 = new Node(1);
	Node* head2 = new Node(3);
	head2->next = new Node(9);
	head2->next->next = new Node(5);
    head2->next->next->next = new Node(3);
	head1->next = new Node(2);
	head1->next->next = new Node(4);
	head1->next->next->next = NULL;
    newNode=addTwoLists(head1,head2);
    print(newNode);	
	return 0;
}

