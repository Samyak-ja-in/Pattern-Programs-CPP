#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int i,j,r;
printf("enter rows");
scanf("%d",&r);
for(i=1;i<=r;i++)
{
for(j=1;j<=r;j++)
{
if(i<=j)
printf("%d",i);
else
printf(" ");
}
printf("\n");
}
getch();
}
