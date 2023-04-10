// first cpp

// #include <stdio.h> // printf, scanf

#include <iostream>
using namespace std; // reserve keyword

int main() { 

	cout << "학과: " << "전자공학과" << endl << "학번: " << "60191792" << endl << "이름: " << "공기정" << endl << "제목: " << "c언어를 c++로 변환 예제" << endl << endl;

	cout << "첫번째 C++ 프로그램입니다." << endl; // printf("첫번째 C++ 프로그램입니다.\n");

	cout << "정수를 입력하세요: "; // printf("정수를 입력하세요: ");

	int num; // main함수의 맨위에 정의

	cin >> num; // scanf_s("%d", &num);

	cout << "입력한 정수는 " << num << "입니다." << endl; // printf("입력한 정수는 %d입니다.\n", num);

	return 0;
}

