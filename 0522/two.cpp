#include <iostream>
using namespace std;

class base{
public:
  void output();
};

void base::output(){
  cout << "base object" << endl;
}

class child1 : public base{
public:
  void output();
};


void child1::output(){
  cout << "child1 object" << endl;
}

int main(void){

  child1 c1;
  c1.output();
  ((base)c1).output();

  // child1클래스로 생성된 객체의 base부분 child1만의 부분 두개중 base부분만 보겠다.
  // 사용자 입장에선 base부분 child부분 둘다 사용 가능

  // 정적 바인딩일때는 ㄱㅊ 
  // 동적 바인딩 실행 순간에 문제가 생김

  // 부모가 있는경우 해당 부모를 가지고 자식을 연결할 수 있다.
  base* p = &c1; // p를 가지고 c1에 접근할 수 있다.

  p->output(); // base안의 함수가 실행됨 -> 문제가 됨 

}

//
//
// b1                c1
// base: output()    base: output()
//                   child1: output()
//
