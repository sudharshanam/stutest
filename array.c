#include<stdio.h>
#include<conio.h>
void main()
{
int a[100],n,i,j,s=0,temp;
clrscr();
printf("Enter the size of arrayelements\n");
scanf("%d",&n);
printf("enter the array element in the array");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
for(j=i+1;j<n;j++)
{
if(a[i]<a[j])
{
s=a[i];
a[i]=a[j];
a[j]=temp;
}
}
for(i=0;i<n;i++)
printf("%d\n",a[i]);
getch();
}


