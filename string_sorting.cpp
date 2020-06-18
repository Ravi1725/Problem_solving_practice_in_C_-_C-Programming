#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;

bool compare(string a,string b)
{
	if(a.length()==b.length())
		return a<b;
	return (a.length()>b.length());
}

int main()
{
	string s[100];
	int n;
	cout<<"Enter the value of n for that number string you want to enter"<<endl;
	cin>>n;
	cin.get();
	for(int i=0;i<n;i++)
	{
		getline(cin,s[i]);
	} 

	sort(s,s+n,compare);
	for(int i=0;i<n;i++)
	{
		cout<<s[i]<<endl;
	}
	return 0;

}