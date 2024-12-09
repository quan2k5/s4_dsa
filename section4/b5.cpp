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
void insertAtPosition(Node** head, int position, int value) {
    Node* newNode = createNode(value);
    if (position == 0) {
        newNode->next = *head;
        *head = newNode;
        return;
    }
    Node* current = *head;
    int index = 0;
    while (current != NULL && index < position - 1) {
        current = current->next;
        index++;
    }
    if (current == NULL) {
        printf("Vi tri khong hop le.\n");
        free(newNode);
        return;
    }
    newNode->next = current->next;
    current->next = newNode;
}
int main(){
	int n,x;
	scanf("%d",&n);
	int position,value;
	scanf("%d",&position);
	scanf("%d",&value); 
	Node* head=NULL;
	for(int i=0;i<n;i++){
		scanf("%d",&x);
	    insertToTail(&head,x);
	}
	duyetList(head);
}
