#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;

void remove_duplicate(char a[])
{
	int l=strlen(a);
	if(l==0 || l==1)
		return;
	int i=1;
	int j=0;
	while(i!=l)
	{
		if(a[j]==a[i])
		{
			i++;
		}
		else
		{
			a[++j]=a[i];
			i++;
		}
	}
	a[++j]='\0';
	cout<<a<<endl;
}

int main()
{
	char a[100];
	cout<<"Enter the input strings"<<endl;
	cin.getline(a,100);
	remove_duplicate(a);
}