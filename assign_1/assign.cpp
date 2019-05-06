#include<iostream>
#include<stdlib.h>
#include<vector>
using namespace std;
#define A 50
int main()
{
	vector<char>input;
	vector<int>count;
	char temp;
	int len=0;
	
	while((temp=getchar())!='\n')
	{
		input.push_back(temp);
		count.push_back(0);
		len++;
	}		

	int indic =1;
	
	for(int i =0;i<=len-1;i++)
	{
		indic=1;
		for(int k=0;k<i;k++)
		{	
			if(input[k]==input[i])
			{
				indic=0;
			}
		}



		if(indic)
		{
	
			for(int l =0;l<=len-1;l++)
				{
					if(input[i]==input[l])
					{
						count[i]++;
					}
				}
				cout<<"There are"<<"..."<<count[i]<<"..."<<input[i]<<"..."<<"exist"<<endl;
		}
	}
	system("PAUSE");
	return 0;
	}
	