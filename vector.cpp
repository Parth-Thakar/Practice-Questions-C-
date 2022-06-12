#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> v;
	int j;
	for(int i =0;i<7;i++)
	{
		cin>>j;
		v.push_back(j);
	}
	
	for(int i =0;i<7;i++)
	{
		cout<<v[i]<<endl;
	}
	
}
