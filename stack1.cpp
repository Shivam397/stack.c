#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void push(int s[],int *top,int size,int value);
int pop(int s[],int *top);
void display(int s[],int top);
int isFull(int top,int size);
int isEmpty(int top);

int main()
{
	int top=-1,choice,value,ele;
	int s[5];
	int size=5;
	do
	{
		printf("\n1.push 2.pop 3.display 4.exit\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("enter value to be inserted:\n");
				scanf("%d",&value);
				push(s,&top,size,value);
				break;
			case 2:
				ele = pop(s,&top);
				printf("element deleted:%d\n",ele);
				break;
			case 3:
				display(s,top);
				break;
			default:
				exit(0);
				break;
		}
	}while(1);
	return 0;
}

void push(int s[],int *top,int size,int value)
{
	if(isFull(*top,size))
	{
		printf("stackOverFlow");
	}
	else
	{
		*top=*top+1;
		s[*top]=value;
	}
}

int pop(int s[],int *top)
{
	int element_deleted;
	if(isEmpty(*top))
	{
		printf("stack is empty");
	}
	else
	{
		element_deleted=s[*top];
		*top=*top-1;
	}
	return element_deleted;
}
void display(int s[],int top)
{
	int i;
	printf("elements present::");
	for(i=top;i>=0;i--)
	{
		printf(" %d ",s[i]);
	}
}
int isFull(int top,int size)
{
	if(top==(size-1))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int isEmpty(int top)
{
	if(top==-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
