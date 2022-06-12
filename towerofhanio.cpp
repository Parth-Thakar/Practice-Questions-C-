#include <iostream>
using namespace std;
void sol(int n, char sor,char dis, char aux)
{
	static int count =0;
	if (n == 0)
	{
		return;
	}
	sol(n-1, sor, dis, aux);
	cout << "Move disk "<<n<<" from Source "<<sor<<" to destination "<<dis<< "number of move : "<<count++<<endl;
	sol(n - 1, sor, dis, aux);
	
}
int main()
{
	int n; 
	cout<<"Entert the value of n : "<<" ";
	cin>>n;
	sol(n, 'A', 'C', 'B'); 
	return 0;
}



