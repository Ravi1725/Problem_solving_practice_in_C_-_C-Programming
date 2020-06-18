#include<stdio.h>
#include<stdlib.h>
typedef struct node{
	int data;
	struct node *left;
	struct node *right;
}node;

struct node *root;
//Find Function
struct node* find(struct node *temp, int x)
{
	if(temp == NULL)
		return (temp);
	else if(temp->data==x)
		return(temp);
	else if(temp->data>x)
		if(temp->left==NULL)
			return(temp);
		else
			return(find(temp->left,x));
	else if(temp->data<x)
		if(temp->right==NULL)
			return(temp);
		else
			return(find(temp->right,x));
}

void insert(struct node *temp, int x)
{
	struct node *place;
	place=find(temp,x);
	if(place==NULL)
	{
		root=(struct node*)malloc(sizeof(struct node));
		root->data=x;
		root->left=NULL;
		root->right=NULL;
	}
	else if(place->data<x)
	{
		place->right=(struct node*)malloc(sizeof(struct node));
		place->right->data=x;
		place->right->right=NULL;
		place->right->left=NULL;
	}	
	else if(place->data>x) 
	{
		place->left=(struct node*)malloc(sizeof(struct node));
		place->left->data=x;
		place->left->left=NULL;
		place->left->right=NULL;
	}
		
	
}

//Create the initial node
struct node* create_root(int x)
{
	struct node *root;
	root=(struct node*)malloc(sizeof(struct node));
	root->data=x;
	root->left=NULL;
	root->right=NULL;
	printf("\n %d",root->data);
}

int main()
{
	
	
	//create_root(15);
	insert(root,15);
	insert(root,8);
	insert(root,28);
	insert(root,18);
	insert(root,36);
	insert(root,4);
	printf("\n%d",(find(root,18))->data);

	
	return 0;
}