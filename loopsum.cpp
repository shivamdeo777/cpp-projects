#include <iostream>
using namespace std;
int main ()
{
    int i,n,sum;
    cout<<"enter the number";
    cin>>n;
    for ( i = 1; i <= n; i++)
    {
        sum=sum+i;
    }
    cout<<"sum of natural number is "<<sum;
    return 0;
}