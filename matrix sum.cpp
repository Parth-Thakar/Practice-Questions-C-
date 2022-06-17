#include<iostream>
using namespace std;
bool is_eq(int arr1[][3],int size,int arr2[][3],int size2)
{
	for(int i=0;i<size;i++)
	{
		for(int j=0;j<size;j++)
		{
			if(arr1[i][j]!=arr2[i][j])
			{
				return false;
			}
		}
	}
	return true;
}
int main()
{
	int arr1[3][3];
	int arr2[3][3];
	cout<<"enter the 1st aaray : "<<endl;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cin>>arr1[i][j];
		}
	}
	cout<<"Enter the 2nd array elements : "<<endl;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cin>>arr2[i][j];
		}
	}
	
	int r[3][3];
	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			r[i][j]=arr1[i][j]+arr2[i][j];
		}
	}
	
	cout<<"sum of the matrix : "<<endl;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<r[i][j]<<" ";
		}
		cout<<endl;
	}
	
	cout<<"transpose of the matrix 1 : "<<endl;
	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<arr1[j][i]<<" ";
		}
		cout<<endl;
	}
	int mul[3][3];
	
	for(int i=0;i<3;i++)    
	{    
		for(int j=0;j<3;j++)    
		{    
			mul[i][j]=0;    
			for(int k=0;k<3;k++)    
			{    
				mul[i][j]+=arr1[i][k]*arr2[k][j];    
			}    
		}    
	}   
	cout<<"Multiplication of matrix : "<<endl; 
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<mul[j][i]<<" ";
		}
		cout<<endl;
	}
	
	
	if(is_eq(arr1,3,arr2,3))
	{
		cout<<"yes they are equal : "<<endl;
		
	}
	else
	{
		cout<<"Not equal : "<<endl;
	}
	
}

