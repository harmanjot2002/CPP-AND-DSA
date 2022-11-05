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

Node* intersectPoint(Node* head1, Node* head2){
	Node* ptr1 = head1;
	Node* ptr2 = head2;
	if (ptr1 == NULL || ptr2 == NULL)
		return NULL;
	while (ptr1 != ptr2) {
		ptr1 = ptr1->next;
		ptr2 = ptr2->next;
		if (ptr1 == ptr2)
			return ptr1;
		if (ptr1 == NULL)
			ptr1 = head2;
		if (ptr2 == NULL)
			ptr2 = head1;
	}
	return ptr1;
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
	Node* head1 = new Node(10);
	Node* head2 = new Node(3);
	head2->next = new Node(9);
	head2->next->next = new Node(15);
    head2->next->next->next = new Node(30);
	head1->next = new Node(23);
	head1->next->next = new Node(34);
	head1->next->next->next = NULL;
    newNode=intersectPoint(head1,head2);
    print(newNode);	
	return 0;
}

