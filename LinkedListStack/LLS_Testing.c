/*
* ���� �ʱ�ȭ �Լ�
* Push
* Pop
* ���� ����
* �� ���� �� ����
*/
#include "LLS_Header.h"

void LSS_InitStack(LinkedListStack** Stack)
{
	(*Stack) = (LinkedListStack*)malloc(sizeof(LinkedListStack));

	if ((*Stack) == NULL)
	{
		printf("������ �Ҵ���� �ʾҽ��ϴ�");
		return;
	}

	(*Stack)->topNode = NULL;
}
