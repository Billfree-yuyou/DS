#include<stdio.h>
#include<stdlib.h>
#define e_type int
struct Node{
	e_type Data;
	struct Node *Next;
};

struct QNode{
	struct Node *rear;
	struct Node *front;
};

typedef struct QNode *Queue;

Queue CreateQueue()
{
	Queue Q;
	Q=(Queue)malloc(sizeof(struct QNode));
	Q->rear=NULL;
	Q->front=NULL;
	return Q;
}

int IsEmpty(Queue Q)
{
	if(Q->rear==NULL&&Q->front==NULL)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

void NewItem(Queue Q, e_type a)
{
	struct Node *FNode;
	FNode=(struct Node *)malloc(sizeof(struct Node));
	FNode->Data=a;
	//printf("a");
	if(Q->front==NULL)		
	{
		//printf("b");
		Q->rear=FNode;
		Q->front=FNode;
		FNode->Next=NULL;
		
	}
	else
	{
		//printf("c");
		Q->rear->Next=FNode;
		Q->rear=FNode;
		FNode->Next=NULL;
		
	}
	
}

void RemoveItem(Queue Q)
{
	struct Node *InterNode;
	InterNode=(struct Node *)malloc(sizeof(struct Node));
	InterNode->Next=Q->front->Next;
	free(Q->front);
	Q->front=InterNode->Next;
	free(InterNode);
}

void PrintQueue(Queue Q)
{
	struct Node *InterNode;
	InterNode=(struct Node *)malloc(sizeof(struct Node));
	InterNode=Q->front;
	while(InterNode!=NULL)
	{
		printf("%d\n",InterNode->Data);
		InterNode=InterNode->Next;
	}
}

int main()
{
	Queue Q;
	Q=CreateQueue();
	NewItem(Q,1);
	NewItem(Q,2);
	NewItem(Q,3);
	RemoveItem(Q);
	//printf("%d%d%d",Q->front->Data,Q->front->Next->Data,Q->front->Next->Next->Data);
	PrintQueue(Q);
	system("pause");
	return 0;
	
}