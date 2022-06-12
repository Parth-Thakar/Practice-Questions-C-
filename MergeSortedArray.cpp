#include<iostream>
using namespace std;
void merge(int arr1[], int size1,int arr2[],int size2,int arr[])
{
	int i=0;
	int j=0;
	int k=0;
	while(i<size1 && j<size2)
	{
		if(arr1[i]<arr2[j])
			{
				arr[k]=arr1[i];
				i++;
				k++;
			}
			else
			{
			arr[i]=arr2[j];
			i++;
			j++;
			}
	}
	while(i<size2)
	{
		arr[k++]=arr1[i++];
	}
	while(j<size1)
	{
		arr[k++]=arr2[j++];
	}
	
}
void print(int arr[],int size)
{
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<endl;
	}
}
int main()
{
	int arr1[3]={1,3,5};
	int arr2[2]={2,4};
	int arr[5]={0};
	
	merge(arr,3,arr1,2,arr);
	
	print(arr,5);
}
