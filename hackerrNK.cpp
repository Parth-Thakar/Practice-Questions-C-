#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i =0;i<n;i++)
    {
        cin>>arr[i];
    }
    int ne=0,p=0,z=0;
    
    for(int i =0;i<n;i++)
    {
        if(arr[i]>0)
        {
            p++;
        }
        if(arr[i]==0)
        {
            z++;
        }
        if(arr[i]<0)
        {
            ne++;
        }
    }
    
    float npr,zpr,ppr;
    
    ppr = 1/6;
    zpr=z/n;
    npr=ne/n;
    
}
