#include <iostream>
using namespace std;

// 3중 포인터는 3차원 배열이다. 

int main(void){

  //int num[10];

  /***********************/
  int count = 10;

  int * num;
  num = new int [count]; // 정적배열과 달리 변수를 쓸 수 있음
  /***********************/

  int i;
  for (i=0;i<count;i++){
    num[i] = i * 10; // *(num + i) = i * 10;
  }

  for (i=0;i<count;i++){
    cout << num[i] << endl; // cout << *(num + i) << endl;
  }

  /***********************/
  delete num;
  /***********************/

  return 0;
}
