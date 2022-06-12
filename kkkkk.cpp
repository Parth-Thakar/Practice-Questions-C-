#include<iostream>
using namespace std;
int main()
{
	int arr[5]={5,4,3,2,1};
	int temp =0;
	for(int i =0;i<5;i++)
	{
		if(arr[i]>arr[i+1])
		{
			temp ++;
		}
	}
	if(temp == 4)
	{
		cout<<"decresingly sorted :"<<endl;
	}
	cout<<"not sorted :"<<endl;
}
