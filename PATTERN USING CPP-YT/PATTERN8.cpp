#include<iostream>
using namespace std;
int main()
{
    int r,i,j;
    cout<<"Enter number of rows ";
    cin>>r;

    for(i=1;i<=r;i++)
    {
        for(j=1;j<=(2*r-1);j++)
        {
            if((j>=r-i+1) && (j<=r+i-1))
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<"\n";
    }
}