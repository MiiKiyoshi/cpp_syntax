// default parameter

#include <iostream>

using namespace std;

void add(int a, int b = 5){
  cout << a+b << endl;
}

void add(double a, double b){
  cout << a+b << endl;
}

int main(){
  add(10);
  add(10, 20);
  add(10.5, 20.6);
}
