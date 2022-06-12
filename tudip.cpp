#include<iostream>
using namespace std;

void process(int n){
        int i, r3, r5;
        for(i = 1; i <= n; ++i)
		{
            r3 = i % 3;
            r5 = i % 5;
            if(r3 && r5) printf("%d", i);
            else{
                if(r3!=0)
				 cout<<"Foo";
                if(r5!=0) 
				 cout<<"Bar";
            }
            cout<<endl;
        }
    }
int main()
{
	int s;
	cin>>s;
	process(s);
}
    
