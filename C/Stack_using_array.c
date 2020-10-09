#include<stdio.h>
#include<stdlib.h>
#define SIZE 5

int stack[SIZE];
int top= -1;

void push();
void pop();
void size();
void display();
void top_val();
int Isfull();
int Isempty();


void main()
{ int ch;
	while(1)
	{  printf("\n Operations on static Stack : \n  ");
       printf("1. Push \n 2. Pop \n 3. Size \n 4. Display \n 5.Top_Value \n 6.Exit");
	   scanf("%d",&ch);
     
		switch(ch)
		{case 1: push();
				break;
		case 2:pop();
				break;
		case 3:size();
				break;
		case 4:display();
				break;
		case 5: top_val();
				break;
		case 6:exit(0);
				break;
		default: printf("Invalid choice\n");
			
		}
	
	}
		
}

void push()
{int ele;
printf("\n Enter Element :");
scanf("%d",&ele);
if(Isfull())
{
	printf("Stack Overflow");
	
}
else
{	top++;
	stack[top]=ele;
	
}

	
}
int Isfull()
{	if(top==SIZE-1)
	{
		return(1);
	}
	else
		return(0);
	
}
void pop()
{int a;
	if(Isempty())
{
	printf("Stack Underflow");
	
}
else
{	a=stack[top];
	top--;
	printf("Popped Value : %d\n",a);
	
}

	
}
int Isempty()
{	if(top==-1)
	{
		return(1);
	}
	else
		return(0);
	
}
void size()
{  int count;
  count=top+1;
	 printf("Size of Stack:%d \n",count);
}
void display()
{ int i=0;
printf("Elements in Stack:");
 for(i=0;i<=top;i++)
 {
	 printf("%d ",stack[i]);
 }
	
}
void top_val()
{ 
	printf("Top Element : %d \n",stack[top]);
}
