#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int i,j,r;
printf("enter row");
scanf("%d",&r);
{
for(i=1;i<=r;i++)
{
for(j=1;j<=i;j++)
printf("*");
printf("\n");
}
}
getch();
}