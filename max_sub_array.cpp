#include <iostream>
#include<algorithm>
using namespace std;

void max_sub_array(int a[], int n)
{
	int current_sum=0;
	int max_sum=0;
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<n;j++)
		{
			for(int k=i; k<=j;k++)
			{
				cout<<a[k]<<","<<endl;
				current_sum +=a[k];

			}
			cout<<current_sum<<endl;
			if(current_sum>max_sum)
			{
				max_sum=current_sum;
			}
		}
	}

	cout<<max_sum<<endl;
}

int main()
{
	int n;
	int a[100];

	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}

	max_sub_array(a,n);

	return 0;
}