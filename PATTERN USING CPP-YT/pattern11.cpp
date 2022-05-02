#include<iostream>
using namespace std;
int main()
{
    int c,i,j;
    cout<<"Enter number of columns ";
    cin>>c;
    for(i=1;i<=2*c-1;i++)
    {
        for(j=1;j<=c;j++)
        {
            if(i<=c && j>=c-i+1)
            {
                cout<<"* ";
            }
            else
            {
                if(i>c && j>=i-c+1)
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