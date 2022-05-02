#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,r;
printf("enter row");
scanf("%d",&r);
for(i=1;i<=r;i++)
{
for(j=i;j<=r;j++)
printf("%d",j);
printf("\n");
}
getch();
}