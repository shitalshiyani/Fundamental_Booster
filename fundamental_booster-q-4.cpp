#include<iostream>
using namespace std;

int main()
{
	char n;
	
	cout<<"Enter Character=";
	cin>>n;
	
		 if (n=='a' || n=='e' || n=='i' || n=='o' || n=='u')
		{
			cout<<"Given Character is Vowel";
		}
		else
		{
			cout<<"Given Character is Consonant";
		}
	return 0;
}
