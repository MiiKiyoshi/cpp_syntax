#include <iostream>
#include <string>

using namespace std;
class vending
{
private:
  string name;
  int sold;
  string num;

public:
  vending();

  void sname(string a);
  void oname(int a);

  void ssold(int k);
  void osold(int a);

  int outsold();
  void sn(int a);
  string on();
  virtual void total(int a);//drink 토탈.
};
vending::vending()
{
  sold=0;
  name="NULL";
  num="NULL";
}
void vending::sn(int a)
{
  num=a;
}
string vending::on()
{
  return num;
}
void vending::sname(string a)
{
  name=a;
}
void vending::oname(int a)
{
  cout<<"음료 자판기"<<a<<"번 이름:  "<<name<<endl;
}

void vending::ssold(int a)
{
  sold=a;
}

void vending::osold(int a)
{
  cout<<"음료 자판기"<<a<<"번 매출:  "<<sold<<endl;
}

void vending::total(int a)
{
  oname(a);
  osold(a);
}

int vending::outsold()
{
  return sold; 
}

class drink:public vending
{
  private:
  int c;//음료의 개수
  public:
  drink();
  void sc(int a);
  void oc(int a);
  void total(int a);//drink 토탈.
  ~drink();
};

drink::drink()
{
  c=0;
}

drink::~drink()
{
  cout<<"음료수 자판기의 계산을 종료합니다."<<endl;
}

void drink::sc (int a)
{
  c=a;
}

void drink::oc(int a)
{
  cout<<"음료 자판기"<<a<<"번"<<" 음료수의 종류의 개수"<<c<<endl;
}

void drink::total(int a)
{
  oname(a);
  osold(a);
  oc(a);
}

class claw:public vending
{
private:
  int k;

public:
  claw();
  ~claw();
 
  void sk(int a);
  void ok(int a);
  void total(int a);//c 토탈.
};

claw::claw()
{
  k=0;
}

claw::~claw()
{
  cout<<"인형뽑기 자판기의 계산을 종료합니다."<<endl;
}

void claw::sk(int a)
{
  k=a;
}

void claw::ok(int a)
{
  cout<<"인형뽑기자판기"<<a<<"번 인형 종류의 개수"<<k<<endl;
}

void claw::total(int a)
{
  oname(a);
  osold(a);
  ok(a);
}

int main() 
{
  drink d1,d2;
  claw c1;

  d1.sn(1);
  d2.sn(2);
  c1.sn(1);

  d1.sname("제3공학관 1층");
  d1.ssold(100000);
  d1.sc(3);

  d2.sname("제1공학관 2층");
  d2.ssold(30000);
  d2.sc(2);

  c1.sname("정문오락실");
  c1.ssold(3000000);
  c1.sk(3);

  d1.total(1);
  d2.total(2);
  c1.total(1);
  cout<<"음료 자판기 1번 제3공학관 1층의 매출은"<<d1.outsold()<<endl;
  cout<<"음료 자판기 2번 제1공학관 2층의 매출은"<<d2.outsold()<<endl;
  cout<<"인형뽑기자판기 1번  정문오락실의 매출은"<<c1.outsold()<<endl;
  cout<<"총 매출은 "<<d1.outsold()+d2.outsold()+c1.outsold()<<"입니다."<<endl;
}
