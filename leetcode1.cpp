#include<iostream>
#include <bitset>
#include<string.h>
#include<algorithm>
#include<cstring>
using namespace std;



bool ispalindromic(string s)
    {
        int i=0,j;
        j=s.length()-1;
        while(i<j)
        {
            if(s[i]==s[j])
            {
                i++;
                j--;
            }
            else
                return false;
        }
        return true;
    }

string longestPalindrome(string s) 
    {
        string max="";
        for (int i=0; i<s.length(); i++) {
			for (int j=1; j<=s.length()-i; j++) {
				string substring = s.substr(i, j);
				cout<<i<<"  "<<j<<endl;
				cout<<substring<<endl;
				if (ispalindromic(substring)) {
					if (max.length() < substring.length()) {
						max = substring;
					}
				    }
			    }
        
        }
        return max;
    }

int main()
{
	string s;
	cout<<"Enter the string you want to enter"<<endl;
	cin>>s;
	//cout << operation_substring(s);
	cout <<  longestPalindrome(s);
	return 0;
}