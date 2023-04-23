#include <iostream>
using namespace std;

//class circle의 정의
class Rect{
  
  //멤버 변수
  public:
    int width; 
    int height;
    double totalarea; 

  void input();
  void calc();
  void output();
  
}; //세미콜론 주의!! 우리가 작성할 클래스에는 반드시 마지막에 "세미콜론" !!

void Rect::input(){ //circle에 들어있는 input -> ::

  width = 10; //class를 reference한 instance에 있는 변수에 값을 넣음
  height = 10;

}

void Rect::calc(){

  totalarea = width * height;

}

void Rect::output(){

  cout << totalarea << endl;

}

int main(){

  Rect r1;
  r1.input();
  r1.calc();
  r1.output();
}
