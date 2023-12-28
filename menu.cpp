// #include <iostream>
// using namespace std;
// int main ()
// {
//     cout<<"menu/n";
//     cout<<"1.add/n"<<"2.sub/n"<<"3.multiply/n"<<"4.devide";
//     int option;
//     cin>>option;
//     int a,b,c;
//     cout<<"enter two num";
//     switch (option)
//     {
//     case 1: c=a+b;
//         break;
//         case 2: c= a-b;
//         break;
//         case 3: c=a*b;
//         break;
//         case 4: c=a/b;
//         break;
//     }
// cout<<c<<option;
// return 0;
// }

#include<iostream>
using namespace std;

int main()
{
	cout<<"Menu\n";
	cout<<"1. add\n"<<"2. sub\n"<<"3. multi\n"<<"4. div\n";
	int option;
	cout<<"Enter Your Choice";
	cin>>option;
	int a,b,c; 
	cout<<"Enter 2 Numbers";
	cin>>a>>b;
		
	switch(option)
    {
	    case 1:c=a+b;
      		break;
		case 2:c=a-b;
		    break;
	    case 3:c=a*b;
		    break;
		case 4:c=a/b;
		    break;
	    }
	    cout<<"result is"<<c<<endl;
		
	return 0;
		
}