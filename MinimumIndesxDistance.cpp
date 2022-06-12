#include<iostream>
using namespace std;
int mindis(int arr[],int size,int x,int y)
{
	int f,s;
	for(int i=0;i<size;i++)
	{
		if(arr[i]==x)
		{
			f=i;
			if(f==0)
			f++;
			break;
		}
	}
	
	for(int j=0;j<size;j++)
	{
		if(arr[j]==y);
		{
			s=y;
			break;
		}
	}
	
	int k=s-f;
	
	return k;
}

int main()
{
	int arr[10]={1,2,3,4,5};
	int in;
	in=mindis(arr,10,1,9);
	cout<<"minimum distance :"<<in<<endl;
	
}
