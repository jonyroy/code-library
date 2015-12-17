#include<stdio.h>
#include<stdlib.h>
#define max 5
int main()
{
	int stack[max],data;
	int top,option ,reply;
	top=-1;
	do
	{
		printf("1. push\n");
		printf("2. pop\n");
		printf("3. exit\n");
		printf("Select proper option : ");
		scanf("%d",&option);
		switch(option)
		{
			case 1 :
				printf("\n Enter a value : ");
				scanf("%d",&data);
				reply=push(stack,&top,&data);
				if(reply==-1)
					printf("\nStack is full");
				else
					printf("\nPushed value");
				break;
			case 2 :
				reply=pop(stack,&top,&data);
				if(reply==-1)
					printf("\nStack is empty");
				else
					printf("\nPopped value is %d",data);
				break;
			case 3 : exit(0);
		}
		printf("\n");
	}while(1);

	return 0;
}
int push(int stack[max],int *top, int *data)
{
	if(*top==max-1)
		return(-1);
	else
	{
		*top=*top+1;
		stack[*top]=*data;
		return(1);
	}
}
int pop(int stack[max], int *top, int *data)
{
	if(*top==-1)
		return(-1);
	else
	{
		*data=stack[*top];
		*top=*top-1;
		return(1);
	}
}
