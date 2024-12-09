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
void insertToTail(Node** head,int n){
	Node* newNode=createNode(n);
	if(*head==NULL){
		*head=newNode;
		return;
	}
	Node* tmp=*head;
	while(tmp->next!=NULL){
		tmp=tmp->next;
	}
	tmp->next=newNode;
}
void duyetList(Node* head){
	Node *temp=head;
	while(temp!=NULL){
		printf("data:%d",temp->data);
		temp=temp->next;
	}
}
void deleteNode(Node** head){
	if(*head==NULL){
		return;
	}
	Node* tmp=*head;
	*head=(*head)->next;
	free(tmp);
}
int main(){
	int n,x;
	scanf("%d",&n);
	Node* head=NULL;
	for(int i=0;i<n;i++){
		scanf("%d",&x);
	    insertToTail(&head,x);
	}
	deleteNode(&head);
	duyetList(head);
}
