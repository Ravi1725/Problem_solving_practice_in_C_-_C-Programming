//Q. Given n non-negative integers representing an elevation map where the width of each bar is 1, compute how much water it is able to trap after raining.

#include<iostream>
#include<stdio.h>
#include<bitset>
#include<bits/stdc++.h> 
#include<algorithm> 
#include<vector>
using namespace std;

//function uses brute force approach
int trap_brute(vector<int>& height) {
	if(height.empty())
		return 0;
        
        int sum=0;
        for(int i=0;i<height.size();i++)
        {
        	int left_max=0;
        	int right_max=0;
            for(int j=i;j>=0;j--)
            {
                left_max=max(left_max,height[j]);
            }
            for(int k=i;k<height.size();k++)
            {
                right_max=max(right_max,height[k]);
            }
            
            sum+=((min(left_max,right_max))-height[i]);
            
        }
        return sum;
        
    }

    //function uses dynamic programming
    int trap_dp(vector<int>& height) {
        if(height.empty())
			return 0;
        int sum=0;
        int size=height.size();
        vector<int> dp_left_max(size);
        vector<int> dp_right_max(size);
        dp_left_max[0]=height[0];
        for(int i=1;i<size;i++)
        {
        	dp_left_max[i]=max(dp_left_max[i-1],height[i]);
        }

        dp_right_max[size-1]=height[size-1];
        for(int i=size-2;i>=0;i--)
        {
        	dp_right_max[i]=max(dp_right_max[i+1],height[i]);
        }
        for(int i=0;i<size;i++)
        {
        	sum+=min(dp_left_max[i],dp_right_max[i])-height[i];
        }

        return sum; 
    }

    int main()
    {
    	vector<int> height={0,1,0,2,1,0,1,3,2,1,2,1};
    	cout << trap_dp(height) <<endl;
    	cout << trap_brute(height) <<endl;
    }

