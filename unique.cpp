#include<iostream>
#include <bitset>
using namespace std;

int main()
{
	int n,a;
	int result=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		result=result^a;
	}
	cout<<"result is "<<result<<endl;
	int t=result<<1;
	cout<<t;
	return 0;
}