#include<iostream>
#include<vector>
using namespace std;
struct node{
	int data;
	int ind; //ind ==-1 尾节点 ind==1 头节点 int== <else>普通节点
	struct node* nextnode;

}
typedef struct node * list;

void qmpty(list li) //这里的li代之指向tail的节点
{
li->next=li;
}

list qin(list li, int num)
{
	list newend = new struct ndoe;
	newend->data=num;
	newend->ind=-1;
	newend->nextnode=NULL;
	li->ind=0;
	li->nextnode=newend;
	return newend;
}

void qout(list li)
{
	li->nextnode=li->nextnode->nextnode;
}


