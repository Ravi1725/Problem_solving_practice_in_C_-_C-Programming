#include<iostream>
#include <bitset>
using namespace std;
int cleared_bititoj(int n,int i, int j)
{
	int a=((~0)<<(j+1));
	int b=(1<<i)-1;
	int mask=a|b;
	return (n & mask);
}

int main()
{
	int n,m,i,j;
	cin>>n>>m>>i>>j;
	int cleared_bit=cleared_bititoj(n,i,j);
	int mask=m<<i;
	int result=mask|cleared_bit;
	cout<<result<<endl;
	return 0;
}