#include<iostream>
#include<vector>
using namespace std;
struct node{
	int data;
	int ind; //ind ==-1 尾节点 ind==1 头节点 int== <else>普通节点
	struct node* nextnode;

};
typedef struct node * list;

void qmpty(list li) //这里的li代之指向tail的节点
{
li->nextnode=li;
}

list qin(list li, int num)
{
	list newend = new struct node;
	newend->data=num;
	newend->ind=-1;
	newend->nextnode=NULL;
	li->ind=0;
	li->nextnode=newend;
	return newend;
}

void qout(list li)
{
	if(li->nextnode->nextnode!=NULL)li->nextnode=li->nextnode->nextnode;
}

//第一题到此结束
//假设以带头结点的循环链表表示队列
//，并且只设一个指针指向队尾结点，
//但不设头指针。试设计相应的置队列空、
//入队列和出队列的算法。

void pushout(list li)//这里的li代之头节点
{
	if(li->nextnode!=NULL)
	{
		while(li->nextnode->nextnode!=NULL)
		{
			li=li->nextnode;
		}
		li->nextnode=NULL;
	}
	else{
	cout<<"沙雕 没有更多元素了"<<endl;
	}
}
 void pushin(list li,int num)
 {
	 list newnode = new struct node;
	 newnode->nextnode=NULL;
	 newnode->data=num;
	 newnode->ind=0;
	 while(li->nextnode->nextnode!=NULL)
	 {
		 li=li->nextnode;
	 }
	 li->nextnode->nextnode=newnode;
	 
 }
 int wastop(list li)
 {
	 while(li->nextnode->nextnode!=NULL)
	 {
		 li=li->nextnode;
	 }
	 return li->nextnode->data;
 }
 int main(){return 0;}
 //第二道题如上所示
 //顺便写一个创建节点的初始函数 方便调试
 list nodecre(int num,int id)
 {
	 list li=new struct node;
	 li->nextnode=NULL;
	 li->data=num;
	 li->ind=id;
	 return li;
 }