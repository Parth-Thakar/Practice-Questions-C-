#include<iostream>
using namespace std;
bool inSorted(int arr[],int size)
{
	int count=0;
	for(int i =1;i<size;i++)
	{
		if(arr[i-1]>arr[i])
		{
			count++;
		}
	}
	if(count==0)
	{
		return true;
	}
	else
	return false;
}
bool dSorted(int arr[],int size)
{
	int count=0;
	for(int i =1;i<size;i++)
	{
		if(arr[i-1]<arr[i])
		{
			count++;
		}
	}
	if(count==0)
	{
		return true;
	}
	else
	return false;
}
int main()
{
	int arr[5]={5,4,3,2,1};
	if(inSorted(arr,5))
	{
		cout<<"Increasingly sorted :"<<endl;
	}
	else
	{
		if(dSorted(arr,5))
		{
			cout<<"Dcresingly sorted:"<<endl;
		}
		else
		{
			cout<<"unsorted :"<<endl;
		}
	}
}
