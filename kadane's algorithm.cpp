#include<iostream>
using namespace std;
int kadane(int arr[],int size)
{
	int maxsum=0,cursum=0;
	for(int i=0;i<size;i++)
	{
		cursum = cursum+arr[i];
		if(cursum>maxsum)
		{
			maxsum = cursum;
		}
		if(cursum < 0)
		{
			cursum = 0;
		}
	}
	return maxsum;
}
int main()
{
	int arr[9]={-2,1,-3,4,-1,2,1,-5,4};
	
	cout<<"maximum subarray sum is : "<<kadane(arr,9)<<endl;
	
	
}
