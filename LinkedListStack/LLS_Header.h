#ifndef LLSTACK_H
#define LLSTACK_H
#include <stdio.h>
#include <stdlib.h>

typedef int Element;

typedef struct node
{
	Element Data;
	Node* ptrForLastNode;
}Node;

typedef struct linkedListStack
{
	Node* topNode;
}LinkedListStack;
#endif 

