/* first cpp 

*/

#include <stdio.h> //printf, scanf

int main() { 
	int num; //main함수의 맨위에 정의

	printf("첫번째 C++ 프로그램입니다.\n");

	printf("정수를 입력하세요: ");
	scanf("%d", &num);

	printf("입력한 정수는 %d입니다.\n", num);

	return 0;
}

