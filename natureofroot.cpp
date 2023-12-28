#include <iostream>
#include <math.h>
using namespace std;
int typedef root;
int main ()
{
    int a,b,c,r1,r2;
    cout<<"enter the 3 value";
cin>>a>>b>>c;
r1=(-b-sqrt(b*b-4*a*c))/(2*a);
r2=(-b+sqrt(b*b-4*a*c))/(2*a);
int typedef discriminant;
int d;
d=b*b-4*a*c;
if (d==0)
{
 cout<<"root are equal and real"<<d;
}
else if(d>0)
{
    cout<<"root are real and unequal";

}
    else
    {
    cout<<"root ara imaginary";    
    }
return 0;
}


