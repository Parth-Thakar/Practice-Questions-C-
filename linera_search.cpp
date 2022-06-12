#include<iostream>
using namespace std;
int ls(int arr[],int size,int key)
{
	for(int i=0;i<size;i++)
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
	int size;
	cout<<"enter the size:  "<<endl;
	cin>>size;
	int arr[size];
	
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	int key;
	cout<<"enter teh key :"<<endl;
	cin>>key;
	if(ls(arr,size,key)<0)
	{
		cout<<"element not present :"<<endl;
		return 0;
	}
	cout<<"index of key :"<<ls(arr,size,key);
		
}
	

