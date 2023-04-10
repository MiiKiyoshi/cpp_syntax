//#include <stdio.h>
#include <iostream>
#include <iomanip> //input output manipulation: 출력하는 기능과 출력 글자수 조작하는 기능

using namespace std;

//c++ version
int main(){

  cout << "정수" << endl;
  cout << 10 << 20 << endl;
  cout << setw(5) << 10 << setw(5) << 20 << endl; //setw(): set width c언어의 (%5d의 역할)
  cout  << left << setw(5) << 20 << right << setw(5) << 20 << endl; //left: 왼쪽으로 정렬해라
  cout << setfill('0') << setw(5) << 10 << setfill(' ') << setw(5) << 20 << endl; //setfill(''): 

  cout << "실수" << endl;
  cout << 20.345 << endl; // 소수점이 딱 맞춰져서 출력됨 (20.345000이 아님)
  cout << fixed << setprecision(2) << 20.345 << endl;
  cout << setw(10) << fixed << setprecision(2) << 20.345 << endl; // fixed: 소수점 고정, setprecision(<숫자>): 소수점 자릿수

}
/* 
출력

정수
1020
   10   20
20      20
00010   20
실수
20.345
20.34
     20.34
*/

//c lang version
/*int main(){

  printf("정수\n");
  printf("%d%d\n",10,20);
  printf("%5d%5d\n",10,20); //5개의 공간을 만들고 오른쪽부터 채움
  printf("%-5d%5d\n",10,20); //5개의 공간을 만들고 왼쪽부터 채움
  printf("%05d%5d\n",10,20); //5개의 공간을 만들고 오른쪽에 채우고 나머지는 0으로 채움

  //double: float의 byte 두배
  printf("실수\n");
  printf("%f\n",20.345); //기본적으로 소수점이 6자리
  printf("%.2f\n",20.345); //<dot(.)을 포함한 전체 자리수> . <소수점 자리수>
  printf("%10.2f\n",20.345);

  return 0;
}*/
