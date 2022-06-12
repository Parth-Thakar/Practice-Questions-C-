//destructor 
#include<iostream>
using namespace std;
class ab
{
	public:
		int a;
		ab()
		{
			a =23;
			cout<<a<<endl;
		}
		~ab()
		{
			cout<<"destructor ab is called :"<<endl;
		}
};
int main()
{
	ab obj;
	//ab obj1(555);
	
}



/*
1. constructor have same name as the class
2. we dont have to call the constructor it get called automatically when object is created
3. it can be overloaded 
4. we use to allocate the memory

whever we occupy memory we make constructore
whenever we deallocate the memory we make destructor

*/


/* 
1. destructor is also have same name as the class but with ~;
2. we don't have to call the destructor it get called automatically when the object is destroyed.
3. it can overloaded;
4. we use to deallocate the memory
*/





