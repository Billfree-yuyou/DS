#include<iostream>
#include<stdlib.h>
#include<vector>
#include<algorithm>
using namespace std;

struct TNODE
{
	int val;
	struct TNODE* ltree,* rtree;
	
};
typedef struct TNODE *  Tree;

Tree Initialnode(int a)
{
	Tree T;
	T= new struct TNODE;
	T->val=a;
	T->ltree=NULL;
	T->rtree=NULL;
	return T;
}

void Insertnode(Tree T,int a)
{
	
	if(a< T->val)
	{
		if(T->ltree==NULL)
		{
			Tree N;
			N=Initialnode(a);
			T->ltree=N;
			N->val=a;
			N->ltree=NULL;
			N->rtree=NULL;
			cout<<"插入成功"<<endl;
		}
		else
		{
			Insertnode(T->ltree,a);
		}
	}
	if(a> T->val)
	{
		if(T->rtree==NULL)
		{
			Tree N;
			N=Initialnode(a);
			T->rtree=N;
			N->val=a;
			N->ltree=NULL;
			N->rtree=NULL;
			cout<<"插入成功"<<endl;
		}
		else
		{
			Insertnode(T->rtree,a);
		}
	}
	if(a==T->val)
	{
		cout<<"出错"<<endl;
		cout<<"try again"<<endl;
	}

}

void printree1(Tree T)
{
cout<<T->val<<endl;
if(T->ltree!=NULL)printree1(T->ltree);
if(T->rtree!=NULL)printree1(T->rtree);
}

void printree2(Tree T)
{
if(T->ltree!=NULL)printree2(T->ltree);
cout<<T->val<<endl;
if(T->rtree!=NULL)printree2(T->rtree);
}

void printree3(Tree T)
{

if(T->ltree!=NULL)printree3(T->ltree);
if(T->rtree!=NULL)printree3(T->rtree);
cout<<T->val<<endl;
}



int main()
{
	Tree ans;
	int temp1;
	cout<<"输入根节点"<<endl;
	cin>>temp1;
	ans=Initialnode(temp1);
	int temp2;
	cout<<"输入要插入的数据，输入2147483646结束输入"<<endl;
	while(cin>>temp2&& temp2!=2147483646)
	{
		Insertnode(ans,temp2);
	}
	cout<<"先序遍历"<<endl;
	printree1(ans);
	cout<<"中序遍历"<<endl;
	printree2(ans);
	cout<<"后序遍历"<<endl;
	printree3(ans);
	return 0;
}
