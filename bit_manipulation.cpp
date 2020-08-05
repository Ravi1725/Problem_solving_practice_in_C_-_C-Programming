//performing bit operation like setbit,getbit,clearbit,updatebit.
#include<iostream>
#include <bitset>
using namespace std;

bool getbit(int n, int i)
{
	int mask=1<<i;
	return((mask & n)>0 ? 1 : 0);
}
int setbit(int n, int i)
{
	int mask=1<<i;
	return (mask|n);
}
int clearbit(int n,int i)
{
	int mask=1<<i;
	return(n^mask);
}
int updatebit(int n, int i, int v)
{
	int mask=~(1<<i);
	int cleared_bit=mask & n;
	return(cleared_bit | (v<<i));
}

int cleared_i_last_bit(int n, int i)
{
	int mask=(-1<<i+1);
	return (mask & n);
}

int cleared_bititoj(int n,int i, int j)
{
	int a=((~0)<<(j+1));
	int b=(1<<i)-1;
	int mask=a|b;
	return (n & mask);
}

int main()
{
	int n,i,j;
	cin>>n>>i>>j;
	int result=getbit(n,i);
	cout<<result<<endl;
	int result1=setbit(n,1);
	cout<<result1<<endl;
	int result2=clearbit(result1,1);
	cout<<"cleared bit at 1th position"<<result2<<endl;
	int result3=getbit(result2,1);
	cout<<"bit at 1h position "<<result3<<endl;

	int result4=updatebit(result1,2,0);
	cout<<"update value 0 at 2nd position: "<<result4<<endl;
	int result5=cleared_i_last_bit(n,i);
	int result6=cleared_bititoj(n,i,j);
	cout<<"cleared last i bit: "<<result5<<endl;
	cout<<"cleared bits between i to j: "<<result6<<endl;

	return 0;
}