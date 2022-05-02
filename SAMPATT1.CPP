#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,c,r;
printf("enter column");
scanf("%d",&r);
printf("enter row");
scanf("%d",&c);
for(j=1;j<=c;j++)
{
printf("\n");
for(i=1;i<=r;i++)
printf("*");
}
getch();
}