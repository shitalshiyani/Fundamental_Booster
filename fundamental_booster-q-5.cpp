#include<iostream>
using namespace std;

int main()
{
	int n[100],arr[100],size;
	
	cout<<"Enter size=";
	cin>>size;
	cout<<"Enter Value=";


	for(int i=0;i<size;i++)
	{
		cin>>n[i];
		arr[i]=n[i]*n[i]*n[i];
	}
	
	for (int i=0;i<size;i++)
	{
		cout<<arr[i]<<endl;
	}
}
