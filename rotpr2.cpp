#include<iostream>
using namespace std;
void rev(int arr[],int start,int end)
{
	
	while(start<=end)
	{
		swap(arr[start++],arr[end--]);
	}
}
void rotate(int arr[],int size,int k)
{
	rev(arr,0,size-(k+1));
	rev(arr,size-k,size-1);
	rev(arr,0,size-1);
}
void print(int arr[],int size)
{
	for(int i =0;i<size;i++)
	{
		cout<<arr[i]<<endl;
	}
}
int main()
{
	int arr[7]={1,2,3,4,5,6,7};
	int k;
	cout<<"enter the k rotation index: "<<endl;
	cin>>k;
	rotate(arr,7,k);
	print(arr,7);
}
