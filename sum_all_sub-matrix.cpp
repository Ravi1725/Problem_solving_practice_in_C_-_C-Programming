//program to calculate the sum of all sub-matrix of the provided matrix in O(n2).
//Main concept is that an indiviual cell comes in how many number of sub_matrix.On this, It is calculated P&C is used. 
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int sum_sub_matrix(int **arr,int n,int m)
{
	int sum=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			int x=(i+1)*(j+1);//Area of rectangle of top_left matrix
			int y=(n-i)*(m-j);//Area of rectangle of bottom_right matrix
			sum+=arr[i][j]*x*y;
		}
	}
	return sum;
}

int main()
{
	int n,m;
	cin>>n>>m;
	int **arr=new int*[n];
	for(int i=0;i<n;i++)
	{
		arr[i]=new int[m];
	}

	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>arr[i][j];
		}
	}
	int sum=sum_sub_matrix(arr,n,m);
	cout<<sum<<endl;
	return 0;

}