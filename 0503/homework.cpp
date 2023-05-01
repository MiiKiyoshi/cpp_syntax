//////////////////////////////////////////////////////////////////////////////////
//
// Name: 공기정
// Student: 60191792 / 전자공학과
//
// Create Date: 4/23 2023
// Project Name: c++ 프로그래밍 문자열 레포트
// Description: 문자열을 입력 받아 정보를 찾아내는 과제
//
//////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <string>

using namespace std;

//개인정보 클래스
class userinfo {
private:
  string rrn; //주민번호
  string stunum; //학번
  string birth;
  string stuyear;
  string sex;

public:
  userinfo();

  void setval_info(string rrn1, string stunum1); //set value
  void input_info();                             //입력
  void calc_bir_year_sex();                      //생년월일 입학년도 성별 산출
  
  void output_info();                            //출력
  void output_calced();                          //산출된 값 출력
};

userinfo::userinfo(){
  input_info();
  calc_bir_year_sex();
}

void userinfo::setval_info(string rrn1, string stunum1){
  if(rrn1.size() == 14)
    rrn = rrn1;
  else
    cout << "잘못된 주민번호" << endl;

  if(stunum1.size() == 8)
    stunum = stunum1;
  else
    cout << "잘못된 학번" << endl;
}

void userinfo::input_info(){
  string temp1, temp2;

  cout << "주민번호를 입력하시오: "; cin >> temp1; //주민번호 입력
  cout << "학번을 입력하시오: "; cin >> temp2; //학번 입력
  cout << endl;

  setval_info(temp1, temp2); // 값을 넣음
}

void userinfo::calc_bir_year_sex(){
  switch(rrn[7]){
    case '1':
      sex = "남성";
      birth = "19"; //20세기
      break;
    case '2':
      sex = "여성";
      birth = "19";
      break;
    case '3':
      sex = "남성";
      birth = "20"; //21세기
      break;
    case '4':
      sex = "여성";
      birth = "20";
      break;
  }

  birth += rrn.substr(0,6); //생년월일 대입
  stuyear = stunum.substr(2,2); // 입학년도 대입
}

void userinfo::output_info(){
  cout << "입력한 주민번호는 " << rrn << " 입니다." << endl;
  cout << "입력한 학번은 " << stunum << " 입니다." << endl;
  cout << endl;
}

void userinfo::output_calced(){
  int month = stoi(birth.substr(4,2));
  int day = stoi(birth.substr(6,2));


  cout << "정보 분석 결과" << endl;
  cout << "생년월일은 " << birth.substr(0,4) << "년 ";
  cout << month << "월 ";
  cout << day << "일 입니다." << endl;

  cout << "입학년도는 " << stuyear << "년 입니다." << endl;
  cout << sex << "입니다." << endl;
}

int main(void){
  userinfo a;
  
  a.output_info();

  a.output_calced();
}

