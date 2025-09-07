//program for bubble sort
#include<stdio.h>
#include<conio.h>
void main(){
	int a[100],n,i,temp,j;
	printf("enter number of element:");
	scanf("%d",&n);
printf("enter %d element:",n);
for(i=0;i<n;i++)
{scanf("%d",&a[i]);}
printf("here your unsort array\n");
for(i=0;i<n;i++)
{printf("%5d",a[i]);}
for(i=0;i<n-1;i++)
{for(j=0;j<n-1;j++)
{if (a[j]>a[j+1])
{temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;}
}
}
printf("\n here your sorted array:\n");
for(i=0;i<n;i++)
{printf("%5d",a[i]);}
}