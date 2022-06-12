#include<iostream>
using namespace std;
#include<string>
void rev(string s1,int size)
{
	int start =0;
	int end = size-1;
	end--;
	while(start<=end)
	{
		swap(s1[start],s1[end]);
		start++;
		end--;
	}
}
void print(string s1,int size)
{
	for(int i =0;i<size;i++)
	{
		cout<<s1[i]<<endl;
	}
}
int main()
{
	string s1 ="hello";
	int l = s1.size();

	//int arr[5]={1,2,3,4,5};
	rev(s1,l);
	print(s1,l);
}
