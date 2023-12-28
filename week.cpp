#include <iostream>
using namespace std;
int main ()
{
    int num;
    cout<<"enter number"<<endl;
    cin>>num;
    if (num==1)
    {
        cout<<"monday"<<num;
    }
    else if (num==2)
    {
        cout<<"tuesday";
    }
else if (num==3)
{
    cout<<"wednusday";
}
   else if (num==4)
   {
    cout<<"thrusday";
   }
else if (num==5)
{
    cout<<"friday";
}
    else if (num==6)
    {
        cout<<"saturday";
    }
    else if (num==7)
    {
        cout<<"sunday";
    }
    else
    {
        cout<<"not a valid num";
    }
return 0;
}
