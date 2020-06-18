#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;

//This function will return max value of sub-matrix among all sub-matrix.
int max_sum(int **arr,int n, int m)
{
	//column wise suffix addtion matrix
	for(int i=n-1;i>=0;i--)
	{
		for(int j=m-2;j>=0;j--)
		{
			arr[i][j]+=arr[i][j+1];
		}
	}

	//Row wise suffix addition matrix
	for(int i=m-1;i>=0;i--)
	{
		for(int j=n-2;j>=0;j--)
		{
			arr[j][i]+=arr[j+1][i];
		}
	}

	int result=0;
	for (int i=0;i<n;i++)
	{
		for (int j=0;j<m;j++)
		{
			result=max(result, arr[i][j]);
		}
	}
		return result;
}

int main()
{
	int n,m;
	cin>>n>>m;
	int **arr=new int*[n];
	for (int i=0;i<n;i++)
	{
		arr[i]=new int[m];
	}

	for (int i=0;i<n;i++)
	{
		for (int j=0;j<m;j++)
		{
			cin>>arr[i][j];
		}
	}
	int k=max_sum(arr,n,m);
	cout<<k<<endl;
	return 0;
}