#include<iostream>
#include <bitset>
#include<string.h>
#include<algorithm>
using namespace std;

void printchar(int n, char arr[])
{
	int j=0;
	while(n>0)
	{
		if((n&1)==1)
		{
			cout<<arr[j];
		}
		j++;
		n=n>>1;
	}
}

void print_subset(char arr[])
{
	int n1=strlen(arr);
	int n=1<<n1;
	for(int i=0;i<n;i++)
	{
		printchar(i, arr);
		cout<<endl;
	}
}


int main()
{
	int n;
	cout<<"Enter the number that you want to enter the string"<<endl;
	cin>>n;
	char *arr=new char[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	print_subset(arr);
	free(arr);

	return 0;
}