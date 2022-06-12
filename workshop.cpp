#include<stdio.h>
#include<conio.h>
void f(int n)
{
	if(n==1)
	{
		printf("%d",n);
	}


	f(n-1);
	printf("%d",n);

}
int main()
{
	int n=5;
	
	f(5);
	
}
