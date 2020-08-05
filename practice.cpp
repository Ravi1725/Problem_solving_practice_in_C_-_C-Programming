#include<iostream>
#include<stdio.h>
#include <bitset>
#include <bits/stdc++.h> 
#include <algorithm> 
using namespace std;

bool compare(string a, string b) 
{ 
    return (a+b < b+a); 
} 
  
string lexSmallest(string a[], int n) 
{ 
    // Sort strings using above compare() 
    sort(a, a+n, compare); 
  
    // Concatenating sorted strings 
    string answer = ""; 
    for (int i = 0; i < n; i++) 
        answer += a[i]; 
  
    return answer; 
} 
int main()
{
	int N,K;
	int num;
	string arr[K];
	cin>>N>>K;
	int c=97;
	int m1=min(N,100);
	if(K<=m1)
	{
		if(N%K==0)
		{
			num=N/K;
			for(int i=0;i<K;i++)
			{
				arr[i]=(char)c;
				c++;
			}
			arr[K]='\0';
			string p=lexSmallest(arr,K);
			for(int i=0;i<num;i++)
			{
				cout<<p;
			}
			cout<<endl;
		}
	}
	return 0;
}