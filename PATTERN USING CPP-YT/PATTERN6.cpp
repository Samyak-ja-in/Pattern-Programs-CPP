#include<iostream>
using namespace std;
int main()
{
    int r,i,j;
    cout<<"ENTER NUMBER OF ROWS ";
    cin>>r;

    for(i=1;i<=r;i++)
    {
        for(j=1;j<=r;j++)
        {
            if (j>=r-i+1)
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