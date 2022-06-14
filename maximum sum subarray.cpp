#include<iostream>
#include<limits>
using namespace std;
int main()
{
	int arr[5]={5,4,-1,7,8};
	int sum=0;
	int max = INT_MIN;
	int temp;
	for(int i=0;i<5;i++)
	{
		temp = arr[i];
		for(int j=i+1;j<5;j++)
		{
			temp = temp+arr[j];
			if(temp>max)
			{
				sum = temp;
				max = temp;
			}
		}
	}
	cout<<max;
	
}
