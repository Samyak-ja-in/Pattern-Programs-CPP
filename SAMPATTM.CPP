#include<iostream.h>
#include<conio.h>
void main()
{
int i,j,k,r;
cout<<"Enter rows ";
cin>>r;
for(i=1;i<=r;i++)
{
k=i;
for(j=1;j<=r+i-1;j++)
{
if(j>=r-i+1 && j<=r+i-1)
{//cout<<k<<" ";
cout<<"* ";
(j>=r?k--:k++);
}
else
cout<<"  ";
//cout<<"  ";
}
cout<<"\n";
}
getch();
}


