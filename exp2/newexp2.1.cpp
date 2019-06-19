#include <vector>
#include<iostream>
#include<stdlib.h>
using namespace std;
struct NODE
{
	int val;
	struct NODE* nextnode;
};
typedef struct NODE *  List;
List Nodecreator()
{
	List tl;
	tl=new struct NODE;
	tl->nextnode=NULL;
	tl->val=0;
	return tl;
}
List Listreverter(List L)
{
	vector<int> stack;
	while(L->nextnode!=NULL)
	{
		stack.push_back(L->val);
		L=L->nextnode;
	}
	
	List ans;
	ans=Nodecreator();
	List nls;
	nls=Nodecreator();
	nls=ans;
	while(stack.size()>0)
	{
		List temp;
		temp=Nodecreator();
		nls->nextnode=temp; 
		temp->val=*(stack.end()-1);
		stack.pop_back();
		nls=temp;
	}
	return ans;
}
int main()
{
	return 0;
}