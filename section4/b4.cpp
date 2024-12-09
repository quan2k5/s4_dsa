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
int searchNode(Node** head,int value){
	if(*head==NULL){
		printf("Danh sach trong");
		return -1;
	}
	Node* tmp=*head;
	int index=0;
	while(tmp!=NULL){
		if(tmp->data==value){
			printf("vi tri can tim :%d",index);
			return index;
		}
		tmp=tmp->next;
		index++;
	}
	printf("vi tri index :-1");
	return -1;
}
int main(){
	int n,x;
	scanf("%d",&n);
	int value;
	scanf("%d",&value);
	Node* head=NULL;
	for(int i=0;i<n;i++){
		scanf("%d",&x);
	    insertToTail(&head,x);
	}
	searchNode(&head,value);
}
