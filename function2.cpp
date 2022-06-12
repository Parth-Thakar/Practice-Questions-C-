#include<iostream>
using namespace std;
#define max 100
class stack
{ 
    int arr[max],top;
	public:
   stack()
   {
   top=-1;
   } 
   void push(int x)
   {
		if(top==max-1)
		{
		cout<<"stack is overflow"<<endl;
		}
		else
		{
			top++;
			arr[top]=x;
		}
	}
	
	int pop()
	{   
    	int display;
	    if(top==-1)
	    {	 
	    cout<<"stack is underflow"<<endl;
	    } 
	else
	{  
	   display=arr[top];
	   top--;
	   return display;
	}
}
	void empty()
	{ 
	  if(top==-1)
	  cout<<"stack is empty : "<<endl;
	  else
	  { 
	  cout<<"stack is not empty :"<<endl;
	  }
	}
};

int main()
{ 
   int x,ch;
   stack obj;
   cout<<"enter 1 for insert \n 2 fr display \n 3 for check empty or not \n 4 for exit:\n"<<"enter value"<<endl;
   while(true){
   cin>>ch;
   switch(ch)
   	{
	    case 1:
   		cout<<"enter value "<<endl;
   		cin>>x;
   		obj.push(x);
   		break;
   		
   	  case 2:
		x=obj.pop();
		cout<<"last number is : "<<x<<endl;
		break;
	  case 3:
	    obj.empty();
		break;
	  case 4:
	  	exit(false);
	  	break;
	  default:
	  	cout<<"no such option : "<<endl;
	  	break;
   	} 
}
  
}
