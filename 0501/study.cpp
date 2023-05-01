#include <iostream>
using namespace std;

void swap(int a, int b){
  cout << "swap:" << a << " " << b << endl;
  a = 100;
  b = 10;
  cout << "swap: " << a << " " << b << endl;
}
// 값이 안바뀜

int main(){
  int k = 1;
  int m = 2;
  swap(k, m);
  cout << "main: " << k << " " << m << endl;
}
