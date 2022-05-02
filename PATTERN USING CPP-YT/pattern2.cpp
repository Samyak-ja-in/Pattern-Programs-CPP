#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    char ch;
    cout<<"Enter number of rows ";
    cin>>n;

    for(i=1;i<=n;i++)
    {
        ch=65;
        for(j=1;j<=i;j++)
        {
            cout<<ch;
            ch++;
        }
        cout<<"\n";
    }

}