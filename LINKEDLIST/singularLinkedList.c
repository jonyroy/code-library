#include "stdio.h"
#include "stdlib.h"

struct node
{
	int data;
	struct node *next;
} *start=NULL,*current;

int push_one(int a)
{
	struct  node *new_node;
	new_node=malloc(sizeof(struct node));
	//new_node->data=a;
	//new_node->next=NULL;
	if(start==NULL)
	{
		start=malloc(sizeof(struct node));
		start->data=a;
		start->next=NULL;
		current=start;
	}
	else
	{
	  current->next=malloc(sizeof(struct node));
      current->next->data=a;
      current->next->next=NULL;
      current=current->next;
	}
	printf("ItemAdded With Push_One\n");
	return 0;
}
int push_two(int a)
{

    struct node *new_node;
    new_node=malloc(sizeof(struct node));
    new_node->data=a;
    new_node->next=NULL;
    if(start==NULL)
    {
    	start=new_node;
    	current=new_node;
    }
    else
    {
       current->next=new_node;
       current=new_node;
    }
    printf("ItemAdded With Push_Two\n");
	return 0;
}
int traverse_list()
{
	struct node *it;
	it=start;
    while(it!=NULL)
    {
    	printf("%d\n",it->data);
    	it=it->next;
    }

}



int main(int argc, char const *argv[])
{
	int n,i,b;
	scanf("%d",&n);
	for (i = 0; i < n; ++i)
	{
		scanf("%d",&b);
		if(i&1)
		push_one(b);
	    else
	    push_two(b);
	}
	traverse_list();
	return 0;
}
