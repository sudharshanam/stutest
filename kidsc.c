#include<stdio.h>
#include<conio.h>
void main()
{
int a,n,i,j,c=0;
clrscr();
printf("\n Enter the number of students in the kidsgarden:");
scanf("%d",&a);
n=2*a;
for(i=0;i<n;i++)
{
for(j=i+1;j<=n;j++)
 {
 printf("\n%d\t%d\t\n",i,j);
 c++;
 }  }
 printf("the daily walk combination no pair is same  is %d",c);
 getch();
}
