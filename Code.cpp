#include <iostream>
#include <string>
using namespace std;
int main()
{
	int a;
	int b;
	int sum;
	int sub;
	int mul;
	int div;
	char c;
	cout<<"Enter the first Number: ";
	cin>>a;
	cout<<"Enter the Second Number: ";
	cin>>b;
	cout<<"Enter the operation you want to perform: +,-,*,/: ";
	cin>>c;
	if (c=='+')
	{
    	sum=a+b;
    	cout<<"The answer for is: "<<sum;
	}
	else if (c=='-')
    {
		sub=a-b;
    	cout<<"The anser is: "<<sub;
    }
    else if (c=='*')
    {
		mul=a*b;
    	cout<<"The anser is: "<<mul;
    }
    else if (c=='/')
    {
		div=a/b;
    	cout<<"The anser is: "<<div;
    }
	else 
    	cout<<"Invalid Input! try Again!";
	return 0;
}
