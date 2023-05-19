#include <iostream>
#include <string>
using namespace std;

//의도적으로 protected가 있는 클래스는 상속 제발 써보라고 하는거임
class base{
//private:
protected: //만약 protected(자식에게 공개)로 바꿧다면
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
//private: -> setname , getname 만들어야됨
protected:
  int id;
public:
  void setid(int temp);
  void output2();
};

void child::setid(int temp){
  id = temp;
}

void child::output2(){
  name = "lee";
  //cout << "child class" << getname() << id << endl; //부모 클래스 영역의 private멤버변수에 접근할때 getname()을 써도 된다!!
  cout << "child class" << name << id << endl; //이제 부모 클래스의 name에 접근할 수 있게됨
}

class grandchild : public child{
public:
  void output3();
};

void grandchild::output3(){
  cout << "grand child class" << name << endl; //조상님(base)클래스의 name
}

int main(void){
  grandchild gc1;
  gc1.setname("lee");
  gc1.setid(100);
  gc1.output3();
}

/*int main(void){
  base b1; //이름을 처리하는 객체
  b1.setname("hong");
  b1.output1();
  //b1.name // name은 protected member이므로 접근 불허

  child c1; // base의 상속을 받음
  c1.setid(10);
  c1.setname("kim");
  //c1.output1();
  c1.output2();
}*/
