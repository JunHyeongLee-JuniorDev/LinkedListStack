#include "LLS_Header.h"

int main()
{
	LinkedListStack* Stack;
	Node* popedNode;
	LLS_InitStack(&Stack);

	LLS_Push(Stack, 1);
	LLS_Push(Stack, 2);
	LLS_Push(Stack, 3);
	LLS_Push(Stack, 4);
	LLS_Push(Stack, 5);

	printf("최상위 노드의 값 : %d\n", LLS_GetTopElement(*Stack));
	
	LLS_Destroy(Stack);

	LLS_Push(Stack, 1);
	LLS_Push(Stack, 2);
	LLS_Push(Stack, 3);
	LLS_Push(Stack, 4);
	LLS_Push(Stack, 5);

	popedNode = LLS_Pop(Stack);
	printf("요소 : %d\n", popedNode->Data);
	free(popedNode);

	popedNode = LLS_Pop(Stack);
	printf("요소 : %d\n", popedNode->Data);
	free(popedNode);

	popedNode = LLS_Pop(Stack);
	printf("요소 : %d\n", popedNode->Data);
	free(popedNode);

	popedNode = LLS_Pop(Stack);
	printf("요소 : %d\n", popedNode->Data);
	free(popedNode);

	popedNode = LLS_Pop(Stack);
	printf("요소 : %d\n", popedNode->Data);
	free(popedNode);



}
