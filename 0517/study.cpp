#include <iostream>
#include <string>
using namespace std;

class base{
private:
  string name;
public:
  void setname(string temp);
  string getname();
  void output1();
};

void base::setname(string temp){
  name = temp;
}

string base::getname(){
  return name;
}

void base::output1(){
  cout << "base class" << name << endl;
}

class child : public base{
private:
  int id;
public:
  void setid(int temp);
  void output2();
};

void child::setid(int temp){
  id = temp;
}

void child::output2(){
  cout << "child class" << getname() << id << endl; //부모 클래스 영역의 private멤버변수에 접근할때 getname()을 써도 된다!!
}

int main(void){
  base b1; //이름을 처리하는 객체
  b1.setname("hong");
  b1.output1();

  child c1; // base의 상속을 받음
  c1.setid(10);
  c1.setname("kim");
  //c1.output1();
  c1.output2();
}
