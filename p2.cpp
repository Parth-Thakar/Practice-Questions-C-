#include<iostream>
using namespace std;
int ls(int arr[],int size,int key)
{
	for(int i =0 ;i<size;i++)
	{
		if(arr[i]==key)
		{
			return i;
		}
	}
	return -1;
}
int main()
{
	int arr[5]={1,2,3,4,5};
	int r = ls(arr,5,4);
	cout<<r<<endl;
}
