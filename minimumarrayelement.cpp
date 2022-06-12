#include<iostream>
using namespace std;
int min(int arr[],int size)
{
	int mi;
	for(int j=0;j<size;j++)
		{
			if(arr[j]<arr[mi])
			mi=j;
		}
		return mi;
}
int main()
{
	int arr[10]={10,20,30,40,50,60,70,0,-90,100};
	int mini;
	mini = min(arr,10);
	cout<<"minimum element is :"<<arr[mini]<<endl;
}
