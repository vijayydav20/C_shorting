#include<stdio.h>
#include<conio.h>
void main(){
	int a[100],n,i,temp,j,min;
	printf("enter number of element:");
	scanf("%d",&n);
printf("enter %d element:",n);
for(i=0;i<n;i++)
{scanf("%d",&a[i]);}
printf("here your unsort array\n");
for(i=0;i<n;i++)
{printf("%5d",a[i]);}
for(i=0;i<n-1;i++)
{min=i;
for(j=i+1;j<n;j++)
{if(a[j]<a[min])
{min=j;}
}
temp=a[min];
a[min]=a[i];
a[i]=temp;
}
printf("\n here your sorted array:\n");
for(i=0;i<n;i++)
{printf("%5d",a[i]);}
}
