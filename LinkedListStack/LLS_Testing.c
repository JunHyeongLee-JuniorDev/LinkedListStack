/*
* 스택 초기화 함수
* Push
* Pop
* 개수 세기
* 맨 위의 값 보기
*/
#include "LLS_Header.h"

void LSS_InitStack(LinkedListStack** Stack)
{
	(*Stack) = (LinkedListStack*)malloc(sizeof(LinkedListStack));

	if ((*Stack) == NULL)
	{
		printf("스택이 할당되지 않았습니다");
		return;
	}

	(*Stack)->topNode = NULL;
}
