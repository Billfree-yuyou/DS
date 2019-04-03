#include<stdio.h>
#include<stdlib.h>
#define E_type int
typedef struct SNode *Stack;

struct SNode{
	E_type Data;
	struct SNode *Next;
};

Stack CreatSNode()
{
	Stack S;
	S=(Stack)malloc(sizeof(struct SNode));
	S->Next=NULL;
	return S;
}

int IsEmpty(Stack S)
{
	return(S->Next==NULL);
}


void PushSnode(int a,Stack OLD)
 {
	Stack NEW; 
	NEW=(Stack)malloc(sizeof(struct SNode));
	NEW->Data=a;
	NEW->Next=OLD->Next;
	OLD->Next=NEW;
 }
 
 void PopSnode(Stack OLD)
 {
	 Stack FREER;
	 if(IsEmpty(OLD))
	 {
		 printf("error");
	 }
	 else
	 {
		FREER->Next=OLD->Next;
		OLD->Next=FREER->Next;
		free(FREER);
	 }
 }
 
 void StackPrint(Stack S)
 {
	while(S->Next!=NULL)
	{
		printf("%d\n",(S->Next)->Data);
		S=S->Next;		
	}	 
 }
 
int main()
{
	Stack A;
	A=CreatSNode();
	PushSnode(2,A);
	PushSnode(3,A);
	PushSnode(4,A);
	StackPrint(A);
	system("PAUSE");
	return 0;
	
}