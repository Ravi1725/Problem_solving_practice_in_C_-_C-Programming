#include<iostream>
#include <bitset>
#include<string.h>
#include<algorithm>
#include<cstring>
using namespace std;

bool ispalindromic(char *arr)
{
	int i=0,j;
	j=strlen(arr)-1;
	while(i<j)
	{
		if(arr[j]==arr[i])
		{
			i++;
			j--;
		}
		else
			return false;
	}
	return true;
}

string operation_substring(string s)
{
	char s1[100];
	char arr[100];
	int longest=0;
	int len,i,j,k;
	int n=s.length();
	for(len=1; len<=n;len++)
	{
		for(i=0;i<=(n-len);i++)
		{
			j=i+len-1;
			int m=0;
			for(k=i;k<=j;k++)
			{
				//cout<<s[k];
				arr[m]=s[k];
				m++;
			}
			arr[m]='\0';
			if(ispalindromic(arr))
			{
				int n=strlen(arr);
				if(longest<n)
				{
					longest=n;
					strcpy(s1,arr);
				}

			}
		}
		
		//return s1;
	}
	return s1;
}

int main()
{
	string s;
	cout<<"Enter the string you want to enter"<<endl;
	cin>>s;
	cout << operation_substring(s);
	//cout <<  longestPalindrome(s);
	return 0;
}