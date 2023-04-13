#include <iostream>
using namespace std;

class sample{ //acess modifier (접근 지정자)가 적혀있지 않으면 default로 private임

private:
  int number; // 0 < number < 100 이러한 제약조건(constraints)가 있는 변수는 private region에 두어야 됨!!
public:
  void setnumber(int temp); // function prototype (함수의 원형선언)
  int getnumber();
};

void sample::setnumber(int temp){

  if ((temp>0)&&(temp<100)){
    number = temp;
    cout << "객체에 저장된 값 " << number << endl;
  }
  else{
    number = -1;
    cout << "범위 오류" << endl;
  }
}

int sample::getnumber(){

  return number;
}

int main(void){
  sample s1;

  s1.setnumber(-10);
  cout << s1.getnumber() << endl;

  //s1.setnumber(-10); //함수를 통해서 값이 검증이 됨

}

// local varible global varible

//어디에서 값을 줄때 제약조건을 만족하는 값으로 필터링 하기 위해서는 멤버function을 사용해야됨
//instance에서 생성된 member function은 member varible을 마음껏 사용 가능하다!

/*
#include <iostream>
using namespace std;

class sample{ //acess modifier (접근 지정자)가 적혀있지 않으면 default로 private임

private:

public:
  int number; // 0 < number < 100
  int count;

};

int main(void){
  sample s1;
  s1.number = 10;
  s1.number = -10; // instance관점에서는 잘못된 값
  cout << s1.number << endl;

}*/
