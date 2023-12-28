#include <iostream>
using namespace std;
typedef int work;
int main ()
{
    /*if hour is less then 6 & greater less then 18 =working hour
    else leisure hour */
int hour;
cout<<"enter the working hour";
cin>>hour;
if (hour>=9 && hour<=18)
{
    cout<<"working hour"<<hour;
}
else
{
    cout<<"leisure time";
}
}