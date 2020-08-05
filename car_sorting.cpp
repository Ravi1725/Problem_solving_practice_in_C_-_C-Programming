#include<iostream>
#include <bitset>
#include<string.h>
#include<algorithm>
#include<cstring>
#include<vector>
using namespace std;

bool compare(pair<int,int> v1,pair<int,int> v2)
{
	int d1=v1.first*v1.first + v1.second*v1.second;
	int d2=v2.first*v2.first + v2.second*v2.second;

	if(d1==d2)
	{
		return v1.first < v2.first;
	}
	return d1<d2;
}

int main()
{
	int n,x,y;
	vector<pair<int,int>> v;
	cout<<"Enter the number of points, you want to entered"<<endl;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>x>>y;
		v.push_back(make_pair(x,y));
		cout<<"capacity"<< v.capacity() <<" ";
		cout<<"size"<< v.size()<<endl;;


	}

	sort(v.begin(),v.end(),compare);
	for(auto p:v)
	{
		cout<<"car"<<p.first<<","<<p.second<<endl;
	}
	return 0;
}