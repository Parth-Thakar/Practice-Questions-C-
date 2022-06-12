#include <iostream>  
using namespace std;  
int main()  
{  
	int a,b;
	cin>>a>>b;
	
	cout<<"Before swap A = "<<a<<" B = "<<b<<endl;      
	a=a*b; 
	b=a/b; 
	a=a/b; 
	
	cout<<"After swap A = "<<a<<" B = "<<b<<endl;      

}  


