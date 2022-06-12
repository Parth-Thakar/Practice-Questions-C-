#include<iostream>
using namespace std;
int main()
{
    int d,oc,of,od,cs,cb,cm,cd;
    
    int cost1,cost2;
    
    cin>>d;	
    
    cin>>oc>>of>>od;
    
    cin>>cs>>cd>>cm>>cd;
    
    cost1=oc+((d-of)*od);
    int pm  = ((d/cs)*cm);
    cost2=cb+pm+(d*cd);
    
    if(cost1<=cost2)
    {
		cout<<"Classic Taxi"<<endl;
	}
    else
    {
		cout<<"Online Taxi"<<endl;
  	}
  	
    return 0;
}


