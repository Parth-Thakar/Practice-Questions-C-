#include<iostream>
using namespace std;

bool ls2d(int arr[][3],int target,int row,int col)
{
	for(int i =0;i<row;i++)
	{
		for(int j =0;j<col;j++)
		{
			if(arr[i][j]==target)
			{
				return true;
			}
		}
	}	
	return false;
}

int main()
{
	int arr[3][3];
	
	for(int i =0;i<3;i++)
	{
		for(int j =0;j<3;j++)
		{
			cin>>arr[i][j];
		}
	}
	while(true)
	{
	
	int key;
	cout<<"enter the value target for search "<<endl;
	cin>>key;
	
	if(ls2d(arr,key,3,3))
	{
		cout<<"found :"<<endl;
	}
	else
	{
		cout<<"not found :"<<endl;
	}
}
}

