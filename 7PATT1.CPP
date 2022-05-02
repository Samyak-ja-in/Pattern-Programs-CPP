#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int n,i,j;
cout<<"\n enter n";
cin>>n;
for(i=0;i<n;i++)
{
 for(j=0;j<(2*n-1);j++)
  {
   if((j==n-i-1)||(j==n+i-1))
    cout<<i+1;
   else
   cout<<" ";
  }
 cout<<"\n";
}
getch();
}