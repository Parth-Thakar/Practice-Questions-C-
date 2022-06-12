#include<iostream>
using namespace std;
bool is_pr(int key,int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		if(arr[i]==key)
		{
			return true;
		}
	}
	return false;
}
void miss(int arrk[],int n)
{
	int arrs[n];
	int k=1;
	for(int i=0;i<n;i++)
	{
		arrs[i]=k;
		k++;
	}
	
	for(int i=0;i<n;i++)
	{
		if(is_pr(arrs[i],arrk,n)==0)
		{
			cout<<"missing number : "<<arrs[i]<<endl;
		}
	}
}
int main()
{
	int n;
	cin>>n;
	
	int arr[5]={1,2,3,4,4};
	
	miss(arr,n);
}
