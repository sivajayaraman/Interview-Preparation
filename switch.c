#include <stdio.h>
int main(){
	char c;
	scanf("%c",&c);
	switch(c)
	{
		case 'A' ... 'Z':
			printf("Upper Case");
			break;
		default: printf("Lower Case");	
	}
	return 0;
}