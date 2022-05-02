#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,r;
clrscr();
printf("enter rows");
scanf("%d",&r);
for(i=1;i<=r;i++)
{
for(j=r;1<=j;j--)
{
if(i>=j)
printf("*");
else
printf(" ");
}
printf("\n");
}
getch();
}

