// program for queue (array)
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void inqueue();
void dequeue();
void display();
int queue[100],front=-1,rear=-1,size;
void main(){
	int choice=0;
	printf("Enter the size of queue[100]:");
	scanf("%d",&size);
	while(choice!=4)
	{
		start:
printf("\n press 1 for inqueue \n press 2 for dequeue \n press 3 for display \n press 4 for exit\n");
printf("\n Enter your choice:");
scanf("%d",&choice);
switch(choice){
	case 1:{inqueue(); break;}
	case 2:{dequeue(); break;}
	case 3:{display(); break;}
	case 4:{exit(1); break;}
	default: {printf("\n wrong entery ! please try again "); goto start;}
}
	}
}
	void inqueue()
	{int item;
	if(rear==size-1)
	{printf("\n stack is full");}
	else{
		printf("\n Enter item:");
		scanf("%d",&item);
		if(rear==-1&& front==-1)
		{rear++;
		front++;}
		else{rear=rear+1;}
		queue[rear]=item;
		printf("\n item inserted");
	}
}
	void dequeue(){
		int item;
		if(front==-1&& rear==-1)
		{printf("\n queue is empty:");}
		else{item=queue[front];
		if(front==rear)
		{front=-1;
		rear=-1;}
		else{front++;}
			printf("\n pop item %d:",item);
			}
	}
void display()
{int i;
	if(front==-1 && rear==-1)
		{printf("\n queue is empty:");}
	else{
		printf("\n here your queue item:\n");
		for(i=front;i<=rear;i++)
		{printf(" %d",queue[i]);}
	}
}

	