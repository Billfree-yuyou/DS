#include<vector>
#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	vector<char>s;
	vector<char>t;
	vector<char>res1;
	vector<char>res2;
	int indic=0;
	int record=1;
	
	char temp;
	cout<<"input s"<<endl;
	while((temp=getchar())!='\n')
	{
		s.push_back(temp);
	}	
	
	char temp2;
	cout<<"input t"<<endl;
	while((temp2=getchar())!='\n')
	{
		t.push_back(temp2);
	}	
	//cout<<s[0]<<"..."<<t[0]<<"..."<<endl;
		int l=0;
		for(int i=0;i<=s.size()-1;i++)
		{
			if(s[i]==t[0] && s[i]!=t[l])
			{
					indic=0;
					record=i;
					l=0;
					//cout<<1<<endl;
			}
			if(s[i]==t[l])
			{
					indic++;
					//cout<<2<<endl;
					l++;
			}
			else
			{
					indic--;
					//cout<<3<<endl;
					l++;
			}
			
			if(indic==t.size())
			{
					res1.assign(s.begin(),s.begin()+record);
					res2.assign(s.begin()+record+indic,s.end());
					res1.insert(res1.end(),res2.begin(),res2.end());
			}
		}
		
vector<char>::iterator poi;
for(poi=res1.begin();poi!=res1.end();poi++)
{
	cout<<*poi<<"";
}

system("PAUSE");
return 0;
}