#include <stdio.h>

void Function()
{
	printf("Execute");
}

void Coordinate(int x, int y)
{
	printf("�Ű� ���� x�� �� : %d\n", x);
	printf("�Ű� ���� y�� �� : %d\n", y);
}

int Damage(int damage)
{
	damage = damage * 5;

	return damage;
}

void Swap(int*a, int*b)
{
	int temp = 0;

	temp = *b;
	*b = *a;
	*a = temp;
}

void main()
{
#pragma region �Լ�
	// �ϳ��� Ư���� ������ �۾��� �����ϱ� ����
	// ���������� ����� �ڵ��� �����Դϴ�.

	// Function();

	// �Լ��� ��� �ڷ����� ��ȯ�ϴ� ���� ���°�
	// ��ġ���� ������ ���ϴ� ���� ���� �� ������,
	// ���� �̸��� �Լ��� �ߺ����� ������ �� �����ϴ�.

#pragma region �Ű� ����
	// �Լ��� ���ǿ��� ���޹��� �μ��� �Լ� ���η�
	// �����ϱ� ���� ����ϴ� �����Դϴ�.

	// Coordinate(5, 10);

	// �Ű� ������ �Լ� ���ο����� ������ �̷������,
	// �Լ��� ����Ǹ� �޸𸮿��� �������, ���� ����
	// �Ű� ������ ������ �� �ֽ��ϴ�.

	// printf("Damage �Լ��� ��ȯ�ϴ� �� : %d\n", Damage(10));

#pragma endregion

#pragma region �μ�
	// �Լ��� ȣ��� �� �Ű� ������ ������ ���޵Ǵ� ���Դϴ�.

	// int a = 10;
	// int b = 20;
	// int x = 0;
	// 
	// Swap(&a, &b);
	// 
	// 
	// 
	// printf("a, b�� �� : %d, %d\n", a, b);
	
	// x = b;
	// b = a;
	// a = x;
	// 
	// printf("a, b�� �� : %d, %d\n", a, b);

	// �μ��� ��� �Լ��� �ִ� �Ű� ������ ���� ���� ������ �� �ִ�
	// �μ��� ���� �����Ǹ�, ���� �����ϴ� �μ��� ���� ���޹޴�
	// �Ű� ������ �ڷ����� ���� ��ġ�ؾ� �մϴ�.
#pragma endregion



#pragma endregion

}