#include <stdio.h>
#include <stdlib.h>
struct node{
	int element;
	struct node* next;
};
struct node* start=NULL;
int n=0,i=0,flag=0;
void printLinkedList(struct node* head){
	if(head==NULL){
		printf("List is Empty!");
	}	
	else{
		while(head != NULL)
    	{
        	printf("%d", head->element);
        	head = head->next;
        	if(i<n-1){
        		printf(" -> ");
        		i++;
        	}
    	}
	}
	printf("\n");
    i=0;
}
void insertElement(struct node** head,int data){
	struct node* new_node=(struct node*)malloc(sizeof(struct node));
	new_node->element=data;
	new_node->next=*head;
	*head=new_node;
	n++;
}
void moveLastElement(struct node* head){
	struct node* previous_node=(struct node*)malloc(sizeof(struct node));
	if(head!=NULL){
		while(head->next!=NULL){
			previous_node=head;
			head=head->next;
		}
		previous_node->next=NULL;
		head->next=start;
		start=head;
	}
	else printf("List is Empty!\n");
}
int main(){
	int choice,x;
	while(1){
		printf("\t1.Insert\n\t2.Print Linked List\n\t3.Move Last Element to Front\n\t4.Exit\n");
		printf("Enter your Choice:");
		scanf("%d",&choice);
		if(choice==1){
			printf("Enter the Element to be added to Link List:");
			scanf("%d",&x);
			insertElement(&start,x);
		}
		else if(choice==2){
			printLinkedList(start);
		}
		else if(choice==3){
			moveLastElement(start);
			printLinkedList(start);
		}
		else if(choice==4){
			printf("Good Bye!\n");
			break;
		}
		else {
			printf("Enter a valid choice!\n");
		}
	}
	return 0;
}