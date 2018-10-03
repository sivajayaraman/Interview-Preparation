#include <stdio.h>
#include <stdlib.h>
#define MAX 1000000
int top=-1;
int stack[MAX];
void printStack(){
	if(top!=-1)
	{
		for(int i=top;i>=0;i--){
			printf("\t|~~~%d~~~|\n",stack[i]);
		}
		printf("\t~~~~~~~\n");
	}	
	else printf("Stack is Empty!");
}
void push(int x){
	if(top==MAX) 
		printf("Stack Overflow!\n");
	else {
		stack[++top]=x;
		printStack();
	}
}
void pop(){
	if(top==-1) 
		printf("Stack Empty!\n");
	else {
		printf("The element %d is poped from the Stack\n",stack[top--]);
		printStack();
	}
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
					push(x);
					break;
			case 2:	pop();
					break;
			case 3:	printStack();
					break;
			case 4: printf("Good Bye!\n");
					break;
			default: printf("Enter a valid choice!");									
		}
	}
	return 0;
}