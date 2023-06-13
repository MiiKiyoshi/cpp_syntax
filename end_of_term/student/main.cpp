#include <iostream>
#include <string>
#include "random.h"

using namespace std;

class student{
private:
  string name;
  string grade;

public:
  string getname();
  void setname(string temp);
  string getgrade();
  void setgrade(string temp);
};

string student::getname(){
  return name;
}
void student::setname(string temp){
  name = temp;
}
string student::getgrade(){
  return grade;
}

void student::setgrade(string temp){
  grade = temp;
}


class professor{
private:
  string name;
public:
  string getname();
  void setname(string temp);
};

string professor::getname(){
  return name;
}

void professor::setname(string temp){
  name = temp;
}

class lecture{
private: 
  string name;
  professor prof;
  student stu[10];
public:
  void setname(string temp1, string temp2);
  void calcgrade(); //학생들의 학점 계산
  void getgrade(); //교수,수업,학생 이름, 학생의 학점 출력
};

void lecture::setname(string temp1, string temp2){
  name = temp1;
  prof.setname(temp2);
}

void lecture::calcgrade() //학생들의 학점 계산
{
  for(int i=0;i<10;i++){
    stu[i].setname(str_random(3));
    stu[i].setgrade(grade_random());
  }
}

void lecture::getgrade() //교수,수업,학생 이름, 학생의 학점 출력
{
  cout << "수업 이름: " << name << endl;
  cout << "교수 이름: " << prof.getname() << endl;
  for(int i=0;i<10;i++){
    cout << "학생: " << stu[i].getname() << "  ";
    cout << "학점: " << stu[i].getgrade() << endl;
  }
}

int main(void)
{
  init_random();

  lecture l1;
  l1.setname("c++ 프로그래밍", "김태완");
  
  l1.calcgrade();
  l1.getgrade();
}
