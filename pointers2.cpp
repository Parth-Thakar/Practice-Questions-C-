#include<iostream>
using namespace std;
int main()
{
	int var=5;
	int* pointvar;
	pointvar = &var;
	cout<<"var = "<<var<<endl;
	cout<<"address of var : "<<&var<<endl;
	cout<<"pointer var = "<<pointvar<<endl;
	cout<<"content of the pointer address variable = "<<*pointvar<<endl;
}
