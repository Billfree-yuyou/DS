#include<iostream>
#include<vector>

struct node{
	int data;
	struct node* nextnode;
	
};
typedef struct node* list;

list listinsert(list li,int min,int max)
{
	while(li->nextnode!=NULL)
	{
		if(li->nextnode->data<=min || li->nextnode->data>=max)
			{
				li->nextnode=li->nextnode->nextnode;
			}				
	}
	return li;

}
int main(){return 0;}
