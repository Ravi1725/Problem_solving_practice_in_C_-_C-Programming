//program to key search within matrix in Time Complexity O(n+m).
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;

//function to search whelther key exist in matris or not. 
bool key_find(int **arr,int n,int m,int key)
{
	int i=0;
	while(i<n && m>=0)
	{
		if(key==arr[i][m-1])
		{
			return true;
		}
		else if(key<arr[i][m-1])
			m--;
			else
				i++;
	}

	cout<<"reached here"<<endl;
	return false;

}

int main()
{
	int n,m,key;
	cin>>n>>m>>key;
	int **arr=new int*[n];
	for(int i=0;i<n;i++)
	{
		arr[i]=new int[m];
	}

	//input matrix taking.
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>arr[i][j];
		}
	}
	if(key_find(arr,n,m,key))
	{
		cout<<"Key is found within matrix"<<endl;
	}
	else
	{
		cout<<"key is not found within matrix"<<endl;
	}
	return 0;
}