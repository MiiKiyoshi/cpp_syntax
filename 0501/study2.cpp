#include <iostream>
using namespace std;

//main은 손대지 않았음
void swap(int & a, int & b){ // a는 k에 달라붙음 b는 m에 달라붙음
  cout << "swap:" << a << " " << b << endl;
  a = 100;
  b = 10;
  cout << "swap: " << a << " " << b << endl;
}

//간접참조와 달리 main함수를 고칠 필요 없이 "함수의 인자"만 바꾸면 됨!!
//main이 아닌 호출 당하는 함수가 전달받는 인자에 대해 결정함

//& -> call by reference
//' ' -> call by value
//* -> call by address

int main(){
  int k = 1;
  int m = 2;
  swap(k, m);
  cout << "main: " << k << " " << m << endl;
}
