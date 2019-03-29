#include<stdio.h>
#include<stdlib.h>
#include<time.h>

clock_t start,stop;
double duration;

void PrintN(int N)
{
if(N){
	PrintN(N-1);
	printf("%d\n",N);
}
return;
}

void PrintN(int N);

int main()
{
int N;
scanf("%d",&N);
start=clock();
PrintN(N);
stop=clock();
duration=((double)(stop-start))/CLK_TCK;
printf("%e\n",duration);
system("pause");
return 0;
}