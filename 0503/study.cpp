// function overloading
// 함수의 이름 동일, 매개변수 타입 또는 개수가 달라야함, ** 리턴 타입은 항수 중복과 무관

// type casting: data type이 다른것으로 변환되는 것

// c++ 특
// 함수 오버로딩시 같은 이름의 함수지만 매개변수가 각각 float랑 double type이 있을때 함수에 값을 넣어서 호출하면 double이 우선됨
// int와 float의 type이 모호함

#include <iostream>
using namespace std;

int sum(int a, int b){
  cout << "int" << endl;
  return a + b;
}

double sum(double a, double b){
  cout << "double" << endl;
  return a + b;
}

class stu{
public:
  //stu(); // class 이름과 같게 반환형을 명시하지 않는다.
  //stu(int a); // 객체 생성시 값을 받아서 초기화 가능

  // stu(int a = <default parameter>) 이렇게 대체 가능
  stu(int a = 1);

  void getname();
  void getname(int a);
};

stu::stu(){
  cout << endl << "default construct" << endl;  
}

stu::stu(int a){ // 
  cout << "general construct" << a << endl;
}

void stu::getname(){
  cout << "hong" << endl;
}

void stu::getname(int a){
  cout << "kim" << a << endl;
}

int main(void){
  cout << sum(10, 20) << endl;
  cout << sum(10.5, 20.6) << endl;

  stu s1;
  s1.getname();
  s1.getname(5);

  stu s2(100); // 객체 생성시 값을 초기화함
  s2.getname();
  s2.getname(10);
}
