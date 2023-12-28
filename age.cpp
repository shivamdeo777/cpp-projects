#include <iostream>
using namespace std;
/* we have to fimd the age group which are child ,which are young ,and older*/
int main ()
{
    int age;
    cout<<"enter your age";
    cin>>age;
    if (age<=12)
    {
        cout<<"you lie in child group"<<age;
    }
   else if (age>=12&&age<=50)
   {
    cout<<"you lie in young age group"<<age;
   }
    else
    {
cout<<"you lie in a old age group";
    }
    
}