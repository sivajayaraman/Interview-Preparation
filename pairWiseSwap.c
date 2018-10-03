#include <stdio.h>
#include <stdlib.h>
struct node{
	int element;
	struct node* next;
};
struct node* start=NULL;
int n=0,i=0,flag=0;
void swap(int* x,int* y){
	int temp=*x;
	*x=*y;
	*y=temp;
}
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
void swapElementsPairWise(struct node* head){
	if(head!=NULL && head->next!=NULL){
		swap(&head->element,&head->next->element);
		swapElementsPairWise(head->next->next);
	}
}
int main(){
	int choice,x;
	while(1){
		printf("\t1.Insert\n\t2.Print Linked List\n\t3.Swap Pair Wise\n\t4.Exit\n");
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
		else if(choice==4){
			printf("Good Bye!\n");
			break;
		}
		else if(choice==3){
			printf("Swapping Element Pairwise!\n");
			swapElementsPairWise(start);
			printLinkedList(start);
		}
		else {
			printf("Enter a valid choice!\n");
		}
	}
	return 0;
}