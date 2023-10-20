#include<iostream>
using namespace std;
int main()
{
	int arr[100],in,n,value,i;
	
	cout<<"\nenter the number of elements in the array ";
	cin>>n;
	cout<<"\nenter the elements of array \n";
	for(i=1;i<=n;i++)
	{
		cin>>arr[i];
	}
	cout<<"\nyour array is :";
	for(i=1;i<=n;i++)
	{
		cout<<"\n"<<arr[i];
	}
	cout<<"\n enter the index number to add value :";
	cin>>in;
	cout<<"\nenter the value :";
	cin>>value;
	for(i=n;i>=in;i--)
	{
		arr[i+1]=arr[i];
		
	}
	arr[in]=value;
	for(i=1;i<=n+1;i++)
	{
		cout<<"\n"<<arr[i];
	}
}
