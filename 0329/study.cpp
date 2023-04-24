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
// 정수
// 1020
//    10   20
// 20      20
// 00010   20
// 실수
// 20.345
// 20.34
//      20.34

