#include<iostream>
using namespace std;
void rsum(int arr[][3],int row,int col)
{
	int sum;
	for(int i =0;i<row;i++)
	{
		sum=0;
		for(int j =0;j<col;j++)
		{
			sum = sum + arr[i][j];
		}
		cout<<"row wise - "<<sum<<endl;
	}
}
int main()
{
	int arr[3][3],sum=0;
	for(int i =0;i<3;i++)
	{
		for(int j =0 ;j<3;j++)
		{
			cin>>arr[i][j];
		}
	}
	
	for(int i =0;i<3;i++)
	{
		sum=0;
		for(int j =0 ;j<3;j++)
		{
			cout<<arr[i][j]<<" ";
			sum = sum + arr[i][j];
		}
		cout<<"||sum of row -> "<<sum<<endl;
	}
	
//	rsum(arr,3,3);
}
