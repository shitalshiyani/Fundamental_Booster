#include<iostream>
using namespace std;

int main()
{
	char n;
	cout<<"Enter String=";
	cin>>n;
	
	if (n>='0' && n<='9')
	{
		cout<<"The string is Numeric";
	}
	else
	{
		cout<<"The string is not Numeric";
	}
	
	return 0;
}
