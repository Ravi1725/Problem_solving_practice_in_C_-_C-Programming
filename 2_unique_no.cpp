#include<iostream>
#include <bitset>
using namespace std;

int result[2];

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
int get_bit_position(int n)
{
	int position=0;
	while(n>0)
	{
		if((n&1)==1)
		{
			cout<<n<<" "<<position<<endl;
			return position;

		}
		position++;
		n=n>>1;
	}
}

void operation(int *arr, int n)
{
	int result1=0;
	int num1=0;
	for(int i=0;i<n;i++)
	{
		result1=result1^arr[i];
	}
	int bit_position=get_bit_position(result1);
	for(int i=0;i<n;i++)
	{
		if(getbit(arr[i],bit_position))
		{	
			num1=num1^arr[i];
			result[0]=num1;
		}
	}
	int num2=num1^result1;
	result[1]=num2;
}

int main()
{
	int n;
	cout<<"The number that you want to give as  an input"<<endl;
	cin>>n;
	int *arr = new int(n);
	for(int i=0; i<n;i++)
	{
		cin>>arr[i];
	}
	operation(arr,n);
	cout<<result[0]<<"  "<<result[1]<<endl;
	free(arr);
	
	return 0;

}