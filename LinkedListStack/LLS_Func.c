/*
* ���� �ʱ�ȭ �Լ�
* Push
* Pop
* ���� ����
* �� ���� �� ����
*/
#include "LLS_Header.h"

void LLS_InitStack(LinkedListStack** Stack)
{
	*Stack = (LinkedListStack*)malloc(sizeof(LinkedListStack*));

	if ((*Stack) == NULL)
	{
		printf("������ �Ҵ���� �ʾҽ��ϴ�");
		return;
	}

	(*Stack)->topNode = NULL; // topNode�� ptrForLastNode�� NULL ����
}

void LLS_Push(LinkedListStack* Stack, Element data)
{
	Node* newNode = (Node*)malloc(sizeof(Node));

	if (newNode == NULL)
		return;

	newNode->Data = data;

	if (Stack->topNode != NULL)
		newNode->ptrForLastNode = Stack->topNode;

	else
		newNode->ptrForLastNode = NULL;

	Stack->topNode = newNode;
}

Node* LLS_Pop(LinkedListStack* Stack)
{
	if (Stack->topNode == NULL)
	{
		printf("��Ұ� �����ϴ�.");
		return;
	}

	Node* removeNode = Stack->topNode;
	Stack->topNode = Stack->topNode->ptrForLastNode;

	return removeNode;
}

Element LLS_GetTopElement(LinkedListStack Stack)
{
	return Stack.topNode->Data;
}

int LLS_Count(LinkedListStack Stack)
{
	Node* currentNode = Stack.topNode;
	int counter = 0;

	while (!(currentNode->ptrForLastNode == NULL))
	{
		currentNode = currentNode->ptrForLastNode;
		counter += 1;
	}

	return counter;
}

int LLS_IsEmpty(LinkedListStack* Stack)
{
	if (Stack->topNode == NULL)
		return 1;

	else
		return 0;
}

void LLS_Destroy(LinkedListStack* Stack)
{
	if (Stack == NULL)
		return;

	while (!LLS_IsEmpty(Stack))
	{
		Node* popped = LLS_Pop(Stack);
		printf("�ı��� ��� : %d\n", popped->Data);
		Destroy(popped);
		printf("��Ұ� null �ΰ�? : %p\n", &popped);
	}

	free(Stack);
}

void LLS_DestroyNode(Node* node)
{
	free(node->ptrForLastNode);
	free(node);
}