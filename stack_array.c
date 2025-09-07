// program for stack (array)
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void push();
void pop();
void display();
int stack[100],top=-1,size;
void main(){
	int choice=0;
	printf("Enter the size of stack[100]:");
	scanf("%d",&size);
	while(choice!=4)
	{
		start:
printf("\n press 1 for push \n press 2 for pop \n press 3 for display \n press 4 for exit\n");
printf("\n Enter your choice:");
scanf("%d",&choice);
switch(choice){
	case 1:{push(); break;}
	case 2:{pop(); break;}
	case 3:{display(); break;}
	case4:{exit(1); break;}
	default: {printf("\n wrong entery ! please try again "); goto start;}
}
	}
}
	void push()
	{int item;
	if(top==size-1)
	{printf("\n stack is full");}
	else{
		printf("\n Enter item:");
		scanf("%d",&item);
		top++;
		stack[top]=item;
		printf("\n item inserted");
	}
}
	void pop(){
		if(top==-1)
		{printf("\n stack is empty:");}
		else{
			printf("\n pop item %d:",stack[top]);
			top--;
		}
	}
void display()
{int i;
	if(top==-1)
		{printf("\n stack is empty:");}
	else{
		printf("\n here your stack item:");
		for(i=top;i>-1;i--)
		{printf("\n %d",stack[i]);}
	}
}

	