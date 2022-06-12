#include<iostream>
using namespace std;
void merge(int arr1[],int s1,int arr2[],int s2,int arr3[])
{
	int i =0;
	int j =0;
	int k=0;
	
	while( i < s1 && j < s2)
	{
		if(arr1[i]<arr2[j])
		{
			arr3[k]=arr1[i];
			i++;
			k++;
		}
		else
		{
			arr3[k]=arr2[j];
			j++;
			k++;	
		}		
	}
	
	// copy
	while( i < s1 )
	{
		arr3[k]=arr1[i];
		i++;
		k++;
	}
	while(j < s2)
	{
		arr3[k]=arr2[j];
		j++;
		k++;
	}
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
	int arr1[5]={1,2,3,4,5};
	int arr2[3]={-6,7,8};
	
	int arr3[8];
	
	merge(arr1,5,arr2,3,arr3);
	print(arr3,8);
	
}
