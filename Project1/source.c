#include<stdio.h>

void main()
{
#pragma region 산술 연산자
//
//
//	int m = 2;
//	int x = 3;
//	int y = 4;
//	const int k = 5;
//
//	// 1. 변수 = 변수 + 변수
//	m = x + y;
//
//	printf(" m : %d\n", m);
//	// 2. 변수 = 변수 - 리터럴 상수
//	m = y - 1;
//
//	printf("m : %d\n", m);
//	// 3. 변수 = 변수 * 심볼릭 상수
//	m = x * k;
//
//	printf("m : %d\n", m);
//	// 4. 변수 = 리터럴 상수 / 리터럴 상수
//	m = 20 / 5;
//
//	printf("m : %d\n", m);
//	// 5. 변수 = 심볼릭 상수 % 리터널 상수
//	m = k % 5;
//
//	printf("m : %d\n", m);



#pragma endregion


#pragma region 비트
	// 데이터를 나타내는 최소의 단위이며, 0 또는 1의
	// 조합으로 논리 계산을 수행하는 단위입니다.

#pragma region (10)진수를 (2)진수로 변환하는 과정
	// 10진수를 1이 될 때까지 계속 2로 나누어 준 다음
	// 나눈 위치의 나머지 값을 아래에서 위로 순서대로 정렬합니다.

	// ex) 23 -> 10111
#pragma endregion

#pragma region (2)진수를 (10)진수로 변환하는 과정
	// 1 byte에 2진수로 저장된 값을 2의 제곱으로 나타냅니다.

	// 각각의 비트에 1이 있다면 1과 2의 제곱의 위치를 계산한
	// 다음 각각의 비트를 모두 더하여 10진수로 나타냅니다.
#pragma endregion

#pragma endregion

}