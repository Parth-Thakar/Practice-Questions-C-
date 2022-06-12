#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;
	cin>>n;
	cin>>k;
	int arr[n];

	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}

	sort(arr,arr+n);
	int t=0;

	for(int i=n-1;i>=k;i--)
	{
		t = t+arr[i];
	}
	cout<<t<<endl;

}
