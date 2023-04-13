#include <iostream> 
using namespace std;

class person{

private:
  int age; // 0 < age < 130
public:
  void setage(int temp); // function prototype
  int getage();
  
  person(); // constructor을 prototype선언할땐 반환형도 쓰지 말고 오직 "클래스 이름"만 써야됨!
  ~person();
};

person::person(){ // constructor의 함수 정의시 반드시 반환형을 생략해야된다!!
  age = 1; // active initialization
  cout << "사람 생성" << endl;
}

person::~person(){ // ~person::person -> 이따구로 쓰면 처맞음
  cout << "사람 소멸" << endl;
}

void person::setage(int temp){ // function definition
  if((temp>0)&&(temp<130)){
    age = temp;
    cout << "나이값 저장됨" << endl;
  }
  else{
    age = -1;
    cout << "나이값 오류" << endl;
  }
}

int person::getage(){
  return age;
}

int main(){

  person p1;
  p1.setage(100);
  cout << p1.getage() << endl;
  
}
