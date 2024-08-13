#include <stdio.h>

void main()
{
#pragma region 변수의 이름 규칙

	// 1. 변수의 경우 이미 중복된 변수의 이름을
	//	  허용하진 않지만, 변수의 이름을 대소문자로
	//	  구별하여 사용할 수 있습니다.

	// 2. 변수의 이름으로 예약어를 사용할 수 없습니다.

	// 3. 변수의 이름은 숫자로 시작할 수 없습니다.
	// ex) int 1x = 10;

	// 4. 변수의 이름으로 공백이 포함될 수 없습니다.
	// ex) int count down = 10;

	// 5. 변수의 이름으로 특수 기호는 "_"와 "$"만 허용합니다.
	// ex) int m_attack = 10;
	// ex) int m$attack = 10;
	// ex) int m!attack = 10; (X)

#pragma endregion

#pragma region 비트
	// 데이터를 나타내는 최소의 단위이며, 0 또는 1의
	// 조합으로 논리 계산을 수행하는 단위입니다.

#pragma region (10)진수를 (2)진수로 변환하는 과정
	// 10진수를 1이 될 때까지 계속 2로 나누어 준 다음
	// 나눈 위치의 나머지 값을 아래에서 위로 순서대로 정렬합니다.

#pragma endregion

#pragma region (2)진수를 (10)진수로 변환하는 과정
	// 1 byte에 2진수로 저장된 값을 2의 제곱으로 나타냅니다.

	// 각각의 비트에 1이 있다면 1과 2의 제곱의 위치를 계산한 다음
	// 각각의 비트를 모두 더하여 10진수로 나타냅니다.
#pragma endregion


	// 메모리는 비트 단위로 데이터를 저장할 수 있으며,
	// 1개의 비트에는 0 또는 1의 값만 저장할 수 있습니다.
#pragma endregion

#pragma region 비트 연산자
	// 비트 단위로 논리 연산을 수행하기 위해 사용하는
	// 연산자입니다.

#pragma region AND 연산자
	// 두 개의 피연산자가 모두 1이면 1을 반환하는 연산자입니다.

	char a = 10; // 0000 1010
	char b = 13; // 0000 1101
	// 0000 1000

	printf("a와 b변수를 AND 연산한 결과 : %d\n", a & b);

#pragma endregion


#pragma endregion

#pragma region 오버플로우
	// 특정한 자료형이 표현할 수 있는 최댓값의 범위
	// 를 넘어서 연산을 수행하는 과정입니다.

	//char data = 128;
	// 
	// -125 = +130
	//
	//printf("data 변수의 값 : %d\n", data);

	// 오버플러우는 부호 없는 자료형에서도 똑같이
	// 발생하며, 실수일 때 오버플러우가 발생하면
	// infinity라는 값으로 출력합니다.
#pragma endregion

#pragma region 언더플로우
	// 특정한 자료형이 표현할 수 있는 최솟값의 범위
	// 를 넘어서 연산을 수행하는 과정입니다.

		//char alphabet = -127;
		//
		//printf("alphabet 변수의 값 : %d\n", alphabet);

		// 언더플로우는 부호 없는 자료형에서도 똑같이 발생하며,
		// 실수일 때 언더플로우가 발생하면 0이라는 값으로 출력합니다.

#pragma endregion

#pragma region 시프트 연산자
	// 비트의 위치를 좌우로 특정한 값만큼 이동하는
	// 연산자입니다.

	// << (왼쪽으로 이동)
	// >> (오른쪽으로 이동)
	//int x = 3; // 0000 0011
	//
	//printf("x 변수를 왼쪽으로 2번 시프트 연산한 결과 : %d\n", x << 2); // 0000 1100
	//
	//printf("x 변수를 오른쪽으로 1번 시프트 연산한 결과 : %d\n", x >> 1); // 0000 0110

#pragma endregion

#pragma region 실수를 저장하는 방법
	// IEEE754
	// 컴퓨터 사이언스

	//float decimal = 12.25f;
	//
	//// 표준 출력 함수로 실수를 출력할 때 4byte 크기의
	//// 실수형 자료형은 소수점 이하 6자리까지만 표기하며,
	//// 8 byte 크기의 실수형 자료형은 소수점 이하
	//// 15자리까지만 표기합니다.
	//printf("decimal 변수의 값 : %f\n", decimal);

#pragma endregion

}