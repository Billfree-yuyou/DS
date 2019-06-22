
#include<vector>
#include<iostream>
using namespace std;
void insertlist(int *a,int num)
{
	int i=0;
	int temp;
	int rec=0;
	while(num>=a[i])
	{
		i++;
	}
	rec=i;
	while(a[i])
	{
		i++;
	}
	temp=i-1;
	while(temp>=rec)
	{
		a[temp+1]=temp;
		temp--;
	}
	a[rec]=num;

}
int main(){return 0;}

//The analysis of time:
//array cpoy fot b cost n
//first loop cost theta n
//second loop cost theta n
//other options are constant
//so the total time consumption is theta n
