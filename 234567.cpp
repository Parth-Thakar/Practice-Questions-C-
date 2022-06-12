#include <iostream>  
using namespace std;  
int main()  
{  
int digit,ans=0,temp;    
cout<<"Enter a number: "<<endl;    
cin>>digit;    
while(digit>0)    
{    
temp=digit%10;    
ans=ans+temp;    
digit=digit/10;    
}    
cout<<"Sum of all digits inside the number is :"<<ans<<endl;    
 
} 
