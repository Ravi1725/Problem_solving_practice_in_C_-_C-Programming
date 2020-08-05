#include<iostream>
#include <bitset>
#include<string.h>
#include<algorithm>
#include<cstring>
using namespace std;

string ispalindromic(string s,int i,int j)
    {
    	string palindrome = "";
        while (i>= 0 && j< s.length() && s[i]==s[j]) {
        	int m=j-i+1;
			palindrome = s.substr(i, m);
			cout<<palindrome<<endl;
			i--;
			j++;
		}
		cout<<endl<<endl;
        return palindrome;
    }

 string longestPalindrome(string s) {
		string max = "";

		for (int i=0; i<s.length()-1; i++) {
			string s1 = ispalindromic(s,i, i);
			string s2 = ispalindromic(s,i, i+1);
			
			string maxOfTwo = s1.length() > s2.length() ? s1 : s2;
			if (max.length() < maxOfTwo.length()) {
				max = maxOfTwo;
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


'''
class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.length();
        if(n==0)
            return "";
        
        vector<vector<bool>> dp(n,vector<bool>(n,false));
        
        for(int i=0;i<n;i++)
            dp[i][i]=true;
        
        string result="";
        for(int i=n-1;i>=0;i--){
            for(int j=i;j<n;j++){
                if(s[i]==s[j] && i!=j){
                    if(j==i+1) // for pallindromes of length 2, for e.g. "bb" in "abbc"
                        dp[i][j]=true;
                    else
                        dp[i][j]=dp[i+1][j-1];
                }
                if(dp[i][j] && (j-i+1)>result.length())
                    result=s.substr(i,j-i+1);
            }
        }
        
        return result;
    }
};

'''