#include<iostream>
using namespace std;
bool check(int arr[],int size)
{
	int count=0;
	for(int i = 1;i<size;i++)
	{
		if(arr[i-1]>arr[i])
		{
			count++;
		}
		if(arr[size-1]>arr[0])
		{
			count++;
		}
	}
	if(count <= 1)
	{
		return true;
	}
	else
	return false;
	
	//return count<=1;
}
int main()
{
	int arr[7]={6,7,1,2,3,4,9};
	
	int r=check(arr,7);
	
	if(r==1)
	cout<<"yes";
	else
	cout<<"no";
}
