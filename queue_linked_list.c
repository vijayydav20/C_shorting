// program for queue linked list
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void inqueue();
void dequeue();
void display();
struct node{
int data;
struct node *next;};
struct node *rear;
struct node *front;
void main(){
	int choice=0;
	while(choice!=4)
	{
		start:
printf("\n press 1 for push \n press 2 for pop \n press 3 for display \n press 4 for exit\n");
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
void inqueue(){
	int val;
	struct node *ptr;
ptr=(struct node*)malloc(sizeof(struct node));
if(ptr==NULL)
{printf("\n overflow");}
else{printf("\n Enter item");
scanf("%d",&val);
	ptr->data=val;
if(front==NULL)
{front=ptr;
rear=ptr;
front->next=NULL;
rear->next=NULL;}
else{
		rear->next=ptr;;
	rear=ptr;
rear->next=NULL;
}
}
}
void dequeue(){
	struct node *ptr;
	if(front==NULL)
	{printf("\n underflow");}
	else{
		ptr=front;
		front=front->next;
		free(ptr);
		printf("\n item deleted");
	}
}
void display(){
	struct node *ptr;
	ptr=front;
	if(front==NULL)
	{printf("\n underflow");}
	else{
printf("here your queue\nI");
		while(ptr!=NULL)
		{printf("%5d",ptr->data);
		ptr=ptr->next;}
	}
}

