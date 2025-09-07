//program for insertion sort
#include<stdio.h>
#include<conio.h>
void main(){
	int a[100],n,i,temp,j;
	printf("enter number of element:");
	scanf("%d",&n);
printf("enter %d element:",n);
for(i=0;i<n;i++)
{scanf("%d",&a[i]);}
printf("here your unsort array \n");
for(i=0;i<n;i++)
{printf("%5d",a[i]);}
// for sorting
for(i=1;i<n;i++)
{ temp=a[i];
j=i-1;
while(j>=0 && a[j]>temp)
{ a[j+1]=a[j];
j--;
}
a[j+1]=temp;
}
printf("\n here your sorted array:\n");
for(i=0;i<n;i++)
{printf("%5d",a[i]);}
}