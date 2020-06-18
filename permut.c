#include<stdio.h>
int count=0;
void delete_ele(char list[],int i,int n,char new_list[])
{
	int j=0,l,k=0;
	/*for(j=0;j<i;j++)
		new_list[j]=list[j];
	for(j=i;j<n-1;j++)
		new_list[j]=list[j+1];*/
	//printf("%s\n",list);
	//printf("%s\n",new_list);
	while(j<i){
		new_list[k]=list[j];
		k++;
		j++;
	}
	for(l=j+1;l<n-1;l++){
		new_list[k]=list[l];
		k++;
	}
}
void permut(char list[],int n,int r,char perm[],int m)
{
	int i;
	char new_list[20];
	if(r==0)
	{
		perm[m]='\0';
		printf("%s ",perm);
		return;
		//count++;
	}
		/*if (count==6){
			printf("\n");
			count=0;
		}*/]
	else
	{
		for(i=0;i<n;i++)
		{
			perm[m]=list[i];
			delete_ele(list,i,n,new_list);
			//printf("%s\n",new_list);
			permut(new_list,n-1,r-1,perm,m+1);
		}
		return;
	}

}

int main()
{
	char list[20], perm[20];
	int r,n,m;

	printf("Enter the value of r and n \n");
	scanf("%d %d", &r,&n);
	printf("\n Enter the string");
	scanf("%s", list);
	printf("%s\n", list);
	permut(list,n,r,perm, 0);
	return 0;
}