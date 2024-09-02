#include <stdio.h>
#include <stdlib.h>

typedef unsigned int UINT;

typedef struct Vector2
{
	int x;
	int y;
} Vector2;

enum state
{
	WALK,
	ATTACK,
	DIE,

	// 열거형에 중간에 있는 값을 바꾸게 되면 그 다음에 있는 값은
	// 중간에 바꾼 값에서 부터 +1이 더해서 계산합니다.
};

enum skill
{
	q = 1,
	w,
	e,
	r
};

int main()
{
#pragma region typedef
	// 이미 정해져 있는 예약어를 사용자가 원하는
	// 이름으로 새롭게 생성하는 것입니다.

	// unsigned int x = 10;
	// UINT y = 20;
	// 
	// Vector2 vector;
	// 
	// vector.x = 10;
	// vector.y = 20;
	// 
	// printf("x 변수의 값: %u\n", x);
	// printf("y 변수의 값: %u\n", y);

#pragma endregion

#pragma region 허상 포인터
	// 이미 해제된 메모리 영역을 가리키는 포인터입니다.

	// int* ptr = (int *)malloc(sizeof(int));
	// 
	// *ptr = 10;
	// 
	// printf("ptr이 가리키는 값 : %d\n", *ptr);
	// 
	// free(ptr);
	// 
	// printf("ptr이 가리키는 값 : %d\n", *ptr);
	// 
	// ptr = NULL;
	// 
	// if (ptr == NULL)
	// {
	// 	ptr = (int*)malloc(sizeof(int));
	// }


#pragma endregion

#pragma region 열거형
	// 이름이 지정된 상수 집합을 나타내는 값 형식입니다.

	// enum State state = WALK;
	// 
	// switch (state)
	// {
	// case WALK : printf("Walk\n");
	// 	break;
	// case ATTACK : printf("Attack\n");
	// 	break;
	// case DIE : printf("Die\n");
	// 	break;
	// default :
	// 	break;
	// }

#pragma endregion

#pragma region Skill System


	int answer = 0;
	int mana = 100;
	enum Skill skill = q;
	while (mana > 0)
	{
		printf("1 ~ 4 스킬 중 하나를 선택하세요\n");
		scanf_s("%d", &skill);

		switch (skill)
		{
		case 1: printf("q\n");
			mana = mana - 10;
			break;
		case 2: printf("w\n");
			mana = mana - 10;
			break;
		case 3: printf("e\n");
			mana = mana - 20;
			break;
		case 4: printf("r\n");
			mana = mana - 30;
			break;
		default: printf("Exception\n");
			break;
		}
	}

#pragma endregion


	return 0;
}