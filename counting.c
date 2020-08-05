#include<stdio.h>

int main()
{
	int n1=0,n2=0,n3=0;
	char c;
	printf("dgash");
	FILE *fp;
	fp=fopen("rr.txt","r");
	while((c=getchar())!=EOF)
	{
		if(c=='\n')
			++n1;
		if(c==' ')
			++n2;
		if(c=='\t')
			++n3;

	}
	printf("number of lines is %d\n",n1);
	printf("number of spaces is %d\n",n2);
	printf("number of tabs is %d\n",n3);
	return 0;
}