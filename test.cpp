#include<iostream>
#include <bitset>
#include<string.h>
#include<algorithm>
#include<cstring>
#include "vector.h"

int main()
{
	vector<char> v;
	v.push_back(1);
	v.push_back(6);
	v.push_back(4);
	v.push_back(9);
	v.push_back(2);

	
	for(int i=0;i<v.size();i++)
	{
		cout<< v[i] <<endl;
	}
	return 0;
}