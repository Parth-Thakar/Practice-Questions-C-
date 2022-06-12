#include<iostream>
using namespace std;
void subset(int arr[],int s1,int arr2[],int s2)
{
	int count=0;
	int i,j;
	for(i =0;i<s1;i++)
	{
		for(j =0;j<s2;j++)
		{
			if(arr[i]==arr[j])
			{
				count++;
				break;
			}
		}
	}
	if(j==count)
	{
		cout<<"subset :"<<endl;
	}
	else
	{
		cout<<"not a subset :"<<endl;
	}
}
int main()
{
	int arr[5]={1,2,3,4,5};
	int arr1[5]={1,2,3,4,89};
	
	
	subset(arr,5,arr1,4);
}
