#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int i,j,k;
for(i=0;i<5;i++)
{
for(j=0;j<4-i;j++)
printf(" ");
for(k=0;k<=2*i;k++)
printf("*");
printf("\n");
}
getch();
}