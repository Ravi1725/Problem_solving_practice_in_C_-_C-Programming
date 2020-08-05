#include<iostream>
#include<stdio.h>
#include <bitset>
#include <bits/stdc++.h> 
#include <algorithm> 
using namespace std;

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
    	ListNode* l3;
        if(l1==NULL)return l2;
        if(l2==NULL)return l1;
        if(l1==NULL&&l2==NULL)return NULL;
    	while(l1!=NULL && l2!=NULL)
    	{
    		if(l1->val<=l2->val)
    		{
    			
    			l3=l1;
    			l1=l1->next;
    			l3=l3->next;
    		}
    		else
    		{
    			l3=l2;
    			l2=l2->next;
    			l3=l3->next;

    		}
    	}
    	if(l1==NULL)
    	{
    		while(l2!=NULL)
    		{
    			l3=l2;
    			l2=l2->next;
    			l3=l3->next;

    		}
    	}
    	else
    	{
    		while(l1!=NULL)
    		{
    			l3=l1;
    			l1=l1->next;
    			l3=l3->next;
    		}
    	}

    	return l3;
        
    }
};

int main()
{

	return 0;
}



class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1==NULL && l2==NULL)
        {
            return NULL;
        }
        if(l1==NULL)
        {
            return l2;
        }
        if(l2==NULL)
        {
            return l1;
        }
        ListNode* merged=l1->val<l2->val?l1:l2;
        ListNode* i=merged==l1?merged->next:l1;
        ListNode* j=merged==l2?merged->next:l2;
        ListNode* temp=merged;
        while(i!=NULL && j!=NULL)
        {
            if(i->val<=j->val)
            {
                temp->next=i;
                i=i->next;
            }
            else
            {
                temp->next=j;
                j=j->next;
            }
            temp=temp->next;
        }        
        if(i!=NULL)
        {
            temp->next=i;
        }
        if(j!=NULL)
        {
            temp->next=j;
        }
        return merged;
    }
};