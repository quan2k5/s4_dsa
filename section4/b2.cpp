#include<stdio.h>
#include<stdlib.h>
using namespace std;
typedef struct Node{
	int data;
	struct Node* next;
}Node;
Node* createNode(int val){
	Node *newNode=(Node*)malloc(sizeof(Node));
	newNode->data=val;
	newNode->next=NULL;
	return newNode;
}
void insertHead(Node** head,int val){
	Node* newNode=createNode(val);
	// tro cai node moi den head;
	newNode->next=*head;
	// cap nhat head tro den 
	*head=newNode;
}
void duyetList(Node* head){
	Node *temp=head;
	while(temp!=NULL){
		printf("data:%d",temp->data);
		temp=temp->next;
	}
}
int main(){
	int n,x;
	scanf("%d",&n);
	Node* head=NULL;
	for(int i=0;i<n;i++){
		scanf("%d",&x);
	    insertHead(&head,x);
	}
	duyetList(head);
}
