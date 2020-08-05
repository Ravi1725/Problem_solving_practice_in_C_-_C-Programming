#include<iostream>
#include <bitset>
#include<string.h>
#include<algorithm>
#include<cstring>
using namespace std;

//dynamic programming (Top down approach) is used.
int fibo_top_down(int n, int dp[])
{
	if(n==0|n==1)
		return n;

	if(dp[n]!=0)
		return dp[n];

	int ans=fibo_top_down(n-1,dp)+fibo_top_down(n-2,dp);
	return dp[n]=ans;	
}

int fibo_bottom_up(int n)
{
	int dp1[100]={0};
	dp1[0]=0;
	dp1[1]=1;
	
	for(int i=2;i<=n;i++)
		dp1[i]=dp1[i-1]+dp1[i-2];
	return dp1[n];
}

int main()
{
	int n;
	int dp[100]={0};
	cin>>n;
	cout << fibo_top_down(n,dp) <<endl;
	cout << fibo_bottom_up(n) <<endl;

	return 0;
}