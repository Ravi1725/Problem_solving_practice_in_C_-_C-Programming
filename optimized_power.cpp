#include<iostream>
#include <bitset>
#include<string.h>
#include<algorithm>
using namespace std;
int optimized_power(int a, int n)
{
	int result=1;
	while(n>0)
	{
		if((n&1)==1)
		{
			result*=a;

		}
		a=a*a;
		n=n>>1;
	}
	return result; 
}

int main()
{
	int a,b;
	cout<<"Enter the value of a and b"<<endl;
	cin>>a>>b;
	cout<< optimized_power(a,b);
	return 0;
}