#ifndef LLSTACK_H
#define LLSTACK_H
#include <stdio.h>
#include <stdlib.h>

typedef int Element;

typedef struct node
{
	Element Data;
	struct node* ptrForLastNode;
}Node;

typedef struct linkedListStack
{
	Node* topNode;
}LinkedListStack;

void LLS_InitStack(LinkedListStack** Stack);
void LLS_Push(LinkedListStack* Stack, Element data);
Node* LLS_Pop(LinkedListStack* Stack);
Element LLS_GetTopElement(LinkedListStack Stack);
int LLS_Count(LinkedListStack Stack);
void LLS_Destroy(LinkedListStack* Stack);
void LLS_DestroyNode(Node* node);
#endif 

