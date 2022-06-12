#include<iostream>
using namespace std;
float avg(int arr[],int n)
{
	int sum = 0;
	float ag;
	for(int i=0;i<n;i++)
	{
		sum = sum+arr[i];
	}
	ag = sum/n;
	return ag;
}
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"average : ="<<avg(arr,n)<<endl;
	
}
