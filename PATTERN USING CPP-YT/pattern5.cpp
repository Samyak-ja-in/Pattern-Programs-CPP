#include<iostream>
using namespace std;
int main()
{
    int r,c,i,j;
    char ch1='@';
    char ch2='*';
    cout<<"Enter number of rows ";
    cin>>r;
    cout<<"Enter number of columns ";
    cin>>c;
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
            if(j%2==0)
            {
                cout<<ch1;
            }
            else
            {
                cout<<ch2;
            }
        }
        cout<<"\n";
    }
}