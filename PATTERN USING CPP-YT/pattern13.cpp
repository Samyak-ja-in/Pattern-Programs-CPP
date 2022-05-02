#include<iostream>
using namespace std;
int main()
{
    int r,i,j,k;
    cout<<"Enter number of rows ";
    cin>>r;
    for(i=1;i<=r;i++)
    {
        k=i;
        for(j=1;j<=r+i-1;j++)
        {
            if(j>=r-i+1 && j<=r+i-1)
            {
                cout<<k<<" ";
                j>=r?k--:k++;
            }
            else
            {
                cout<<"  ";
            }
        }
        cout<<"\n";
    }
}