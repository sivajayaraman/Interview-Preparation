#include <stdio.h>
#include <stdlib.h>
#define MAX 1000000
int queue[MAX];
int front=-1;
int rear=-1;
void printQueue(){
	if(front==-1 || front<rear){
		printf("Queue is Empty!\n");
	}
	else{
		for(int i=rear;i<=front;i++){
			printf("\t|~~~%d~~~|\n",queue[i]);
		}
		printf("\t|~~~~~~~|\n");
	}
}
void enqueue(int x){
	if(front==-1)
		rear++;
	queue[++front]=x;
	printQueue();
}
void dequeue(){
	if(rear==-1 || front<rear){
		printf("Queue is Empty!\n");
	}
	else{
		printf("The Dequeued Element is %d\n",queue[rear++]);
	    printQueue();
	}
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
					enqueue(x);
					break;
			case 2:	dequeue();
					break;
			case 3:	printQueue();
					break;
			case 4: printf("Good Bye!\n");
					break;
			default: printf("Enter a valid choice!");									
		}
	}
	return 0;
}