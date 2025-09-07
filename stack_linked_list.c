// program for stack linked list
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void push();
void pop();
void display();
struct node{
int data;
struct node *next;};
struct node *head;
void main(){
	int choice=0;
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
	case 4:{exit(1); break;}
	default: {printf("\n wrong entery ! please try again "); goto start;}
}
	}
}
void push(){
	int val;
	struct node *ptr;
ptr=(struct node*)malloc(sizeof(struct node));
if(ptr==NULL)
{printf("\n overflow");}
else{printf("enter item:")
	scanf("%d",&val);
	ptr->data=val;
	if(head==NULL)
	{ptr->next=NULL;
	head=ptr;
	}
	else{ptr->next=head;
	head=ptr;}
}
}
void pop(){
	struct node *ptr;
	if(head==NULL)
	{printf("underflow");}
else{ptr=head;
	head=head->next;
	free(ptr);
	printf("item popped");
}
}
void display(){
	struct node *ptr;
	ptr=head;
	if(head==NULL)
	{printf("underflow");}
	else{printf("here your stack:\n");
	while(ptr!=NULL)
	{printf("%d",ptr->data);
	ptr=ptr->next;
	}
	}
}