#include<iostream>
#include<string>
using namespace std;
int main()
{
	int i,j;
	string str1,str2;
	getline(cin,str1);
	getline(cin,str2);
	i = str1.length();
	j = str2.length();
	if(i==j)
	{
		str1=str1+str2;
		cout<<str1;
	}
	else
	cout<<"they are not equal :"<<endl;
	
}
