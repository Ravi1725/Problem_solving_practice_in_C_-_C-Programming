#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;

char *mystrtok(char *str,char delm)
{
	//defining static pointer variable for maintaining pointer movement
	static char *input=NULL;
	if(str!=NULL)
	input=str;

	//Base condition
	if(input==NULL)
		return NULL;

	char *output=new char(strlen(input)+1);

	int i=0;
	for( ;input[i]!='\0'; i++)
	{
		if(input[i]!=delm)
			output[i]=input[i];
		else
		{
			output[i]='\0';
			input=input +i+1;
			return output;
		}
	}

	//corner condition
	output[i]='\0';
	input=NULL;
	return output;
}


int main()
{
	char s[100]="ravi roushan,kumar and rajan,roy"; //vector
	//cout<<"enter the string"<<endl;
	//cin>>s;

	char *ptr=mystrtok(s,',');
	cout<<ptr<<endl;

	while(ptr!=NULL)
	{
		ptr=mystrtok(NULL,',');
		cout<<ptr<<endl;
	}
	sort(s,s+100);
	cout<<s<<endl;
	
	return 0;

}