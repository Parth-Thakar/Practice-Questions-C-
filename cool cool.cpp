#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> a;
	int size;
	int j;
	cin>>size;
	for(int i =0;i<size;i++)
	{
		cin>>j;
		a.push_back(j);	
	}
	cout<<"size  --> "<<a.size()<<endl;
	cout<<"capacity --> "<<a.capacity()<<endl;
	a.clear();
	
	cout<<"size  --> "<<a.size()<<endl;
	cout<<"capacity --> "<<a.capacity()<<endl;
	for(int i =0;i<size;i++)
	{
		cout<<a[i]<<endl;
	}
	
	
}
