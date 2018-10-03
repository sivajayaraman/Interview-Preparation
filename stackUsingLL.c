#include <stdio.h>
#include <stdlib.h>
struct node{
	int data;
	struct node* next;
};
struct node* start=NULL;
void printStack(struct node* head){
	if(head!=NULL)
	{
		while(head!=NULL){
			printf("\t|~~~%d~~~|\n",head->data);
			head=head->next;
		}
		printf("\t~~~~~~~\n");
	}	
	else printf("Stack is Empty!");
}
void push(struct node** head,int x){
	struct node* new_node= (struct node*)malloc(sizeof(struct node));
	new_node->data=x;
	new_node->next=*head;
	*head=new_node;
	printStack(start);
}
void pop(){
	if(start!=NULL){
		printf("Element %d is poped out of stack\n",start->data);
		start=start->next;
		printStack(start);
	}
	else printf("Stack is Empty!\n");
}
int main(){
	int choice=0,x;
	while(choice!=4){
		printf("\n\t1.Push\n\t2.Pop\n\t3.Print\n\t4.Exit\nEnter your Choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: printf("Enter the element to be pushed into the stack:");
					scanf("%d",&x);
					push(&start,x);
					break;
			case 2:	pop();
					break;
			case 3:	printStack(start);
					break;
			case 4: printf("Good Bye!\n");
					break;
			default: printf("Enter a valid choice!");									
		}
	}
	return 0;
}