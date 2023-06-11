#include <iostream>
using namespace std;

int main(void){
  //int a;

  int * a;
  int count = 100; // cin >> count; // 런타임중 사용자가 원하는 배열갯수로 생성할 수 있음

  // c언어
  // a = (int*)malloc(count*sizeof(int));

  a = new int [count];

  *a = 10;
  cout << *a << endl;

  // c언어
  // free(a);

  delete a;

  return 0;
}
