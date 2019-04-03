#include<stdio.h>
#include<stdlib.h>
void PrintN(int N)
{
int i;
for (i=1;i<=N;i++)
{
	printf("%d\n",i);
}
return;
}
void PrintN(int N);
int main()
{
int N;
scanf("%d",&N);
PrintN(N);
system("pause");
return 0;
}