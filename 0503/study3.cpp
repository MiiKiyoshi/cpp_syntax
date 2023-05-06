#include <iostream>
using namespace std;

void swap(int *a, int *b){
  int temp;

  temp = *a;
  *a = *b;
  *b = temp;
}

void swap(int &a, int &b){
  int temp;

  temp = a;
  a = b;
  b = temp;
}

int main(){
  int k = 5;
  int m = 10;

  swap(&k, &m); // c
  cout << "1 " << k << m << endl;
  swap(k, m);
  cout << "2 " << k << m << endl;
}

/*int main(){
  int a = 10;
  int *p;
  int &q = a;
  p = &a;

  *p = 5;

  q = 5;
}*/
