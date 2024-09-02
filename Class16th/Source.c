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

	// �������� �߰��� �ִ� ���� �ٲٰ� �Ǹ� �� ������ �ִ� ����
	// �߰��� �ٲ� ������ ���� +1�� ���ؼ� ����մϴ�.
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
	// �̹� ������ �ִ� ���� ����ڰ� ���ϴ�
	// �̸����� ���Ӱ� �����ϴ� ���Դϴ�.

	// unsigned int x = 10;
	// UINT y = 20;
	// 
	// Vector2 vector;
	// 
	// vector.x = 10;
	// vector.y = 20;
	// 
	// printf("x ������ ��: %u\n", x);
	// printf("y ������ ��: %u\n", y);

#pragma endregion

#pragma region ��� ������
	// �̹� ������ �޸� ������ ����Ű�� �������Դϴ�.

	// int* ptr = (int *)malloc(sizeof(int));
	// 
	// *ptr = 10;
	// 
	// printf("ptr�� ����Ű�� �� : %d\n", *ptr);
	// 
	// free(ptr);
	// 
	// printf("ptr�� ����Ű�� �� : %d\n", *ptr);
	// 
	// ptr = NULL;
	// 
	// if (ptr == NULL)
	// {
	// 	ptr = (int*)malloc(sizeof(int));
	// }


#pragma endregion

#pragma region ������
	// �̸��� ������ ��� ������ ��Ÿ���� �� �����Դϴ�.

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
		printf("1 ~ 4 ��ų �� �ϳ��� �����ϼ���\n");
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