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
    i=0;
}
void insertElement(struct node** head,int data){
	struct node* new_node=(struct node*)malloc(sizeof(struct node));
	new_node->element=data;
	new_node->next=*head;
	*head=new_node;
	n++;
}
void deleteElement(struct node* head,int data){
	struct node* previous_node=(struct node*)malloc(sizeof(struct node));
	previous_node=NULL;
	if(head!=NULL){
		while(head->next!= NULL)
    	{
        	if(head->element==data){
        		flag=1;
        		break;
        	}
        	previous_node=head;
        	head=head->next;
    	}
    	if(head->next==NULL && head->element!=data){
    		printf("Element Not Found!\n");
   		}
   		else if(previous_node==NULL){
   			start=start->next;
   			n--;
   		}
    	else{
    		n--;
    		previous_node->next=head->next;
    		head->next=NULL;
   		}
    }
    else printf("List is Empty!");
}
void search(struct node* head,int data){
	if(head!=NULL){
		while(head->next!= NULL)
    	{
        	if(head->element==data){
        		printf("\nThe Element %d is found at %d index!",data,i+1);
        		flag=1;
        		break;
        	}
        	head=head->next;
        	i++;
    	}
    	if(head->element==data && head->next==NULL){
        	printf("\nThe Element %d is found at %d index!",data,i+1);
        	flag=1;
        }
    	if(flag==0){
    		printf("Element not Found!\n");
     	}
    }
    else printf("List is Empty!");
    i=0;
}
int main(){
	int choice,x;
	while(1){
		printf("\n\t1.Insert\n\t2.Delete\n\t3.Search\n\t4.Print Linked List\n\t5.Exit\n");
		printf("Enter your Choice:");
		scanf("%d",&choice);
		if(choice==1){
			printf("Enter the Element to be added to Link List:");
			scanf("%d",&x);
			insertElement(&start,x);
			printLinkedList(start);
		}
		else if(choice==2){
			printf("Enter the Element to be deleted from the Linked List:");
			scanf("%d",&x);
			deleteElement(start,x);
			if(flag==1){
				printLinkedList(start);
				flag=0;
			}
		}
		else if(choice==3){
			printf("Enter the Element to be searched in the Linked List:");
			scanf("%d",&x);
			search(start,x);
		}
		else if(choice==4){
			printLinkedList(start);
		}
		else if(choice==5){
			printf("Good Bye!\n");
			break;
		}
		else {
			printf("Enter a valid choice!\n");
		}
	}
	return 0;
}