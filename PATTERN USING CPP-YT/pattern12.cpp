#include<iostream>
using namespace std;
int main()
{
    int r,i,j;
    cout<<"Enter mid of rows ";
    cin>>r;
    for(i=1;i<=2*r-1;i++)
    {
        for(j=1;j<=2*r-1;j++)
        {
            if(i<=r && (j>=r-i+1 && j<=r+i-1))
            {
                cout<<"* ";
            }
            else
            {
                if(i>r && (j>=i-r+1 && j<=3*r-i-1))
                {
                    cout<<"* ";
                }
                else
                {
                    cout<<"  ";
                }
            }
        }
        cout<<"\n";
    }
}