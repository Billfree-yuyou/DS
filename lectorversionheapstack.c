#define OK 1
#define ERROR 0
#define INFEASIBLE -1
#define OVERFLOW -2
typedef int    Status;
typedef int SElemType;
#define STACK_INIT_SIZE 100
#define STACKINCREMENT 10
#include <iostream>
#include <cstdlib>
#include <stdlib.h>
using namespace std;

   struct Sestruct {
    
    SElemType *base;
    SElemType *top;
     int stacksize;
   };
typedef struct Sestruct Sqstack;

Status InitStack(Sqstack &S)
{
    
    S.base=(SElemType *)malloc(STACK_INIT_SIZE*sizeof(SElemType));
    
    if(!S.base) exit(OVERFLOW);
    S.top=S.base;
    S.stacksize=STACK_INIT_SIZE;
    return OK;
}



Status push(Sqstack &S,  SElemType e)
{
    if((S.top-S.base)>=S.stacksize)
    {S.base=(SElemType*)realloc(S.base,(S.stacksize+STACKINCREMENT)*sizeof(SElemType));
    
    S.top=S.base+S.stacksize;
        S.stacksize+=STACKINCREMENT;
}
    *S.top++=e;
    return OK;
}

Status gettop(Sqstack &S,SElemType &e)
{
    if(S.top==S.base) return ERROR;
    e=*(S.top-1);
    S.top--;
    return OK;
    
}
void conversion(){
    int N,e;
    Sqstack S;
    InitStack(S);
    cin>>N;
    while(N){
        push(S,N%8);
        N=N/8;
    }
    while((S.top!=S.base)){
        gettop(S,e);
        cout<<e;
    }
    
}
int main(int argc, const char * argv[])
{
    Sqstack S;
    InitStack(S);
    int i,e;
    for(i=1;i<=50;i++){
        push(S,2*i);
    }
    for(i=1;i<=50;i++)
    {gettop(S,e);
        cout<<e<<endl;
    }
    conversion();
    
    return 0;
    
    
}
