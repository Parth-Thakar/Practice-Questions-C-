#include<iostream>
using namespace std;
class bank{
	char name[10],tyacc;
	int accno,balance;
	public:
	void input()
	{
		cout<<"enter the name of account holder"<<endl;
		cin>>name;
		cout<<"enter the number of account "<<endl;
		cin>>accno;
		cout<<"enter the type of accout "<<endl;
		cin>>tyacc;
		cout<<"enter the balance of the account "<<endl;
		cin>>balance;
	}
	int deposit(int i)
	{
		balance=balance+i;
		return balance;
	}
	int withdraw(int i)
	{
		if(balance>0)
		{	
			balance=balance-i;
			return balance;
		}
		else 
		cout<<"no amount to withdraw";	
	}
	void display()
	{
		cout<<"Name : "<<name<<endl;
		cout<<"Balance : "<<balance<<endl;
	}
	
};
int main()
{
	int amount,ch,total;
	bank bk;
	cout<<"enter the details of the bank acoount : "<<endl;
	bk.input();
	cout<<"enter the choice \n 1. for display \n 2. for withdraw \n 3. for deposit : \n "<<endl;
	cin>>ch;
	switch(ch)
	{
		case 1: 
			bk.display();
			break;
		case 2:
			cout<<"enter the withdrawal amount : ";
			cin>>amount;
			total=bk.withdraw(amount);
			cout<<"withdrawal of "<<amount<<" has been done balance : -> "<<total<<endl;
			break;
		case 3:
			cout<<"enter the deposit amount : ";
			cin>>amount;
			total=bk.deposit(amount);
			cout<<"deposit of "<<amount<<" has been done balance : -> "<<total<<endl;
			break;
	}
}





