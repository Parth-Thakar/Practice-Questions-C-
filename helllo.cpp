#include<iostream>
#include<string>
using namespace std;
class books
{
	public:
		string title;
		string au_nm;
		string pub_nm;
		int price;
		int stock;
		books()
		{
			cout<<"Enter the Title of the book : ";
			cin>>title;
			cout<<"Enter the author name : ";
			cin>>au_nm;
			cout<<"Enter the publisher name : ";
			cin>>pub_nm;
			cout<<"enter the Price of the book :";
			cin>>price;
			cout<<"Eneter the stock of book : ";
			cin>>stock;
		}
		void modify()
		{
			cout<<"Enter the Title of the book : ";
			cin>>title;
			cout<<"Enter the author name : ";
			cin>>au_nm;
			cout<<"Enter the publisher name : ";
			cin>>pub_nm;
			cout<<"enter the Price of the book :";
			cin>>price;
			cout<<"Eneter the stock of book : ";
			cin>>stock;
		}
		void display()
		{
			cout<<"Name of the Book :"<<title<<endl;
			cout<<"Author Name of the Book :"<<au_nm<<endl;
			cout<<"Publisher Name of the Book :"<<pub_nm<<endl;
			cout<<"Price of the Book :"<<price<<endl;
			cout<<"Stock of the Book :"<<stock<<endl;
		}
		void buy(int quan)
		{
			if(quan<stock)
			{
			cout<<"Total bill : "<<price*quan<<endl;
			stock = stock-quan;
			}
			else
			{
				cout<<"no stock of the book "<<endl;
			}
		}
};

class node
{
	public:
	books data;
	node* add;
	node()
	{
		add = NULL;
	}
};
void inserthead(node* &head)
{
	node* newnode = new node();
	newnode->add = head;
	head = newnode;
}
void print(node* head)
{
	while(head!=NULL)
	{
		head->data.display();
		head = head->add;
	}
}
void search(node* head,string key)
{
	int post=0;
	while(head!=NULL)
	{
		post++;
		if(head->data.title==key)
		{
			head->data.display();
		}
		head = head->add;	
	}	
	
}
void showbill(node* head,string temp,int qu)
{
	while(head!=NULL)
	{
		if(head->data.title==temp)
		{
			head->data.buy(qu);
		}
		head = head->add;
	}
}
void mod(node* head,string key)
{
	while(head!=NULL)
	{
		if(head->data.title==key)
		{
			head->data.modify();
		}
		head = head->add;
	}
}
int main()
{
	node* node1 = new node();
	node* head = node1;
	string key,temp;
	int ch,kl,ql;	
	while(true)
	{
		cout<<"1. For New Entry : \n 2. For buy : \n 3. Search the book : \n 4. Modify the book: \n 5. for exit :"<<endl;
		cin>>ch;
		switch(ch)
		{
			case 1:
				inserthead(head);
				break;
			case 2:
				cout<<"Enter the title of book "<<endl;
				cin>>temp;
				cout<<"Enter the Qunatity :"<<endl;
				cin>>ql;
				showbill(head,temp,ql);
				break;
			case 3:
				cout<<"Enter the tiitle of the book : ";
				cin>>key;
				search(head,key);
				break;
			case 4:
				cout<<"Enter the tiitle of the book : ";
				cin>>key;
				mod(head,key);
				break;
			case 5:
				exit(0);
				break;
			
		}
		
		books* ibj = new books[20];
	}
	
	
}
