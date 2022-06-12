#include<iostream>
using namespace std;
void merge(int arr1[],int s1,int arr2[],int s2,int arr3[],int s3)
{
	int i=0,j=0,k=0;
	while(i<s1 && j<s2)
	{
		if(arr1[i]>arr2[j])
		{
			arr3[k]=arr2[j];
			j++;
			k++;
		}
		else
		{
			arr3[k]=arr1[i];
			i++;
			k++;
		}
	}
	while(i<s1)
	{
		arr3[k]=arr1[i];
		i++;
		k++;
	}
	while(j<s2)
	{
		arr3[k]=arr2[j];
		j++;
		k++;
	}
}
void print(int arr[],int size)
{
	
}
int main()
{
	int arr1[5]={1,2,3,4,5};
	int arr2[3]={5,6,7};
	
	int arr[8];
	merge(arr1,5,arr2,3,arr,8);
	
}
