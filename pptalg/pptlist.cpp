$
#include<vector>
#include<iostream>
using namespace std;
void insertlist(int *a,int num)
{
	int i=0;
	int b[]=a;
	int rec=0;
	while(num>=a[i])
	{
		i++;
	}
	rec=i;
	while(b[i])
	{
		a[i+1]=b[i];
		i++;
	}
	a[rec]=num;

}

//The analysis of time:
//array cpoy fot b cost n
//first loop cost theta n
//second loop cost theta n
//other options are constant
//so the total time consumption is theta n
