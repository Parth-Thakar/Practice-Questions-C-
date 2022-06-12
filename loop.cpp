#include<iostream>
using namespace std;
int main()
{
	int pass,i,pswd;
	cout<<"enter the new password : "<<endl;
	cin>>pass;
	for(i=0;i<3;i++)
	{
		cout<<"enter the correct password"<<endl;
		cin>>pswd;
		if(pswd==pass)
		{
			cout<<"you have entred the right password \n data is \n amandeep chutiya hai "<<endl;
			break;
		}
		else {
		cout<<"galat hai chutiye you have "<<" chances left"<<endl;
		}
	}
}

	

