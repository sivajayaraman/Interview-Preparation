#include <stdio.h>
#include <stdlib.h>
struct node{
	int data;
	struct node* next;
};
struct node* start=NULL;
void printQueue(struct node* head){
	if(head!=NULL){
		while(head!=NULL){
			printf("\t|~~~%d~~~|\n",head->data);
			head=head->next;
		}
		printf("\t~~~~~~~\n");
	}
	else 
		printf("Queue is Empty!\n");
}
void enqueue(struct node** head,int x){
	struct node* new_node=(struct node*)malloc(sizeof(struct node));
	new_node->data=x;
	new_node->next=*head;
	*head=new_node;
	printQueue(start);
}
void dequeue(struct node* head){
	struct node* previous_node=(struct node*)malloc(sizeof(struct node));
	previous_node=NULL;
	if(head!=NULL){
		while(head->next!=NULL){
			previous_node=head;
			head=head->next;
		}
		if(previous_node!=NULL)
			previous_node->next=NULL;
		else start=NULL;
		printQueue(start);
	}
	else printf("Queue is Empty\n");
}
int main(){
	int choice=0,x;
	while(choice!=4){
		printf("\n\t1.Enqueue\n\t2.Dequeue\n\t3.Print Queue\n\t4.Exit\nEnter your Choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: printf("Enter the element to be pushed into the Queue:");
					scanf("%d",&x);
					enqueue(&start,x);
					break;
			case 2:	dequeue(start);
					break;
			case 3:	printQueue(start);
					break;
			case 4: printf("Good Bye!\n");
					break;
			default: printf("Enter a valid choice!");									
		}
	}
	return 0;
}