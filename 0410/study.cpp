#include <iostream>
using namespace std;

class person{
  //int age; //Acess modifier가 없음

private:
  int age; // setage만 acess가능한 변수

public:
  void setage(int temp); //main함수에서 나이를 전달해주고 싶을때, 나이가 범위안에 들어갔는지 확인하는 함수를 만들어야됨!!
  // main함수에서 나이를 받아들임
  // setage를 통과한 value는 검사를 거치는것임
  int getage();
};

// 한 정보에서 유츄할 수 있는 정보가 있을때
// 주민번호, 생년월일
// get함수를 하나만 만들어도 됨 (주민번호에서 생년월일을 받을 수 있음)

void person::setage(int temp){ // <클래스>:: -> 해당 클래스 그룹 안에 속한 setage이다!
  
  if((temp>0) && (temp<120)){
    age = temp; 
    cout << "범위 정상" << endl;
  }
  else{
    cout << "범위 초과" << endl;
  }
}

int person::getage(){ // 꺼내는 함수 //멤버함수는 멤버변수에 마음껏 접근가능하다.
 return age+3; // 값을 꺼낼때의 정제된 값을 꺼내줄 수 있음  
}

int main(){
  
  person p1;
  
  p1.setage(10);
  
 /* 
  p1.age = 10; // 오류 
  cout << p1.age << endl; // 오류
  // 넣는 함수, 꺼내는 함수를 만들자!!
*/
  cout << p1.getage() << endl;
  

  //error
  //p1.age = 1000; //변수는 수동적임
  //member function을 써야된다!!
  
  return 0;
}