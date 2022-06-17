#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[5]={5,4,-1,7,8};
	
	int size = 5;
	
	int sum =0;
	
	int max = INT_MIN;
	
	for(int i=0;i<size;i++)
	{
		sum = arr[i];
		for(int j=i+1;j<size;j++)
		{
			sum = sum + arr[j];
			if(sum>max)
			{
				max = sum;
			}
		}
	}
	
	cout<<max<<endl;
}
