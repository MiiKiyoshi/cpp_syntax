//////////////////////////////////////////////////////////////////////////////////
// Name: 공기정
// Student: 60191792 / 전자공학과
//
// Create Date: 5/19 2023
// Project Name: c++ 프로그래밍 객체 지향 설계 실습 리포트
// Description: 클래스 설계 정의 및 객체 입출력 과제
//////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <string>

#define FLOOR2FLOOR 3.5 // 한층당 3.5미터
#define NUM_OF_FLOOR 4 // 4층 건물
#define MAX_NUM_PASSENGER 3 // 엘레베이터 최대 인원(소형 엘레베이터)
#define EL_MAX_NAME_LENGTH 10 // 엘레베이터의 이름의 최대 길이

using namespace std;

/**************************층 클래스*********************************/
class floor {
private:
  int num; // 층수
  double height; // 층의 고도
public:
  void set_num(int temp);
  int get_num(void);

  double get_height(void);
};

void floor::set_num(int temp) {
  if ((temp > 0) && (temp <= NUM_OF_FLOOR)) {
    num = temp;
    height = (num - 1) * FLOOR2FLOOR;
  }
  else {
    num = 0;  // 유효하지 않은 층 번호일 경우 0으로 설정한다.
    height = 0.0;
  }
}

int floor::get_num(void) {
  return num;
}

double floor::get_height() {
  return height;
}

/***************************승객 클래스*******************************/
class passenger {
private:
  int num;
  floor board_floor, desti_floor;
public:
  void set_num(int temp);
  int get_num(void);

  void set_board(floor temp);
  floor get_board(void);

  void set_desti(floor temp);
  floor get_desti(void);
};

void passenger::set_num(int temp) {
  num = temp;
}

int passenger::get_num(void) {
  return num;
}

void passenger::set_board(floor temp) {
  board_floor = temp;
}

floor passenger::get_board(void) {
  return board_floor;
}

void passenger::set_desti(floor temp) {
  desti_floor = temp;
}

floor passenger::get_desti(void) {
  return desti_floor;
}

/**********************엘레베이터 클래스*****************************/
class elevator {
private:
  string name;
  passenger passengers[MAX_NUM_PASSENGER];
  floor queue[NUM_OF_FLOOR];
public:
  void set_name(string temp);
  string get_name(void);

// 객체 배열이므로 함수 내에서 콘솔로 입출력한다.
  void set_passenger(void);
  void get_passenger(void);

  void set_queue(void);
  void get_queue(void);
};

void elevator::set_name(string temp) {
  if ((temp.length() > 0) && (temp.length() <= EL_MAX_NAME_LENGTH)) {
    name = temp;
  }
  else name = "";
}

string elevator::get_name(void) {
  return name;
}

void elevator::set_passenger(void) {
  int call_num;
  int board_num;
  int desti_num;

  for (int i = 0; i < MAX_NUM_PASSENGER; i++) {
    passenger p;

    cout << i << "번 승객의 호출번호를 입력하시오. > ";
    cin >> call_num;
    p.set_num(call_num);

    cout << i << "번 승객의 탑승층을 입력하시오. > ";
    cin >> board_num;
    floor board_floor;
    board_floor.set_num(board_num);
    p.set_board(board_floor);

    cout << i << "번 승객의 목적층을 입력하시오. > ";
    cin >> desti_num;
    floor desti_floor;
    desti_floor.set_num(desti_num);
    p.set_desti(desti_floor);

    passengers[i] = p;
  }
};

void elevator::get_passenger() {
  for (int i = 0; i < MAX_NUM_PASSENGER; i++) {
    cout << i << "번 승객의 호출번호는 " << passengers[i].get_num() << "입니다." << endl;
    cout << i << "번 승객의 탑승층은 " << passengers[i].get_board().get_num() << " (높이: " << passengers[i].get_board().get_height() << ") 입니다." << endl;
    cout << i << "번 승객의 목적층은 " << passengers[i].get_desti().get_num() << " (높이: " << passengers[i].get_desti().get_height() << ") 입니다." << endl;
  }
}

void elevator::set_queue() {
  int floor_num;
  for (int i = 0; i < NUM_OF_FLOOR; i++) {
    cout << i << "번째의 층수를 입력하시오. > ";
    cin >> floor_num;
    floor f;
    f.set_num(floor_num);
    queue[i] = f;
  }
}

void elevator::get_queue() {
  for (int i = 0; i < NUM_OF_FLOOR; i++) {
    cout << i << "번째의 층수는 " << queue[i].get_num() << " (높이: " << queue[i].get_height() << ") 입니다." << endl;
  }
}

int main(void){
  elevator el;
  el.set_name("1호기");
  cout << "엘레베이터의 이름은 " << el.get_name() <<"입니다." << endl;
  el.set_passenger();
  el.set_queue();
  cout << endl << endl;
  el.get_passenger();
  el.get_queue();
}

/////////////////////////////////////////
// 결과:
//
// 엘레베이터의 이름은 1호기입니다.
// 0번 승객의 호출번호를 입력하시오. > 3
// 0번 승객의 탑승층을 입력하시오. > 2
// 0번 승객의 목적층을 입력하시오. > 1
// 1번 승객의 호출번호를 입력하시오. > 1
// 1번 승객의 탑승층을 입력하시오. > 2
// 1번 승객의 목적층을 입력하시오. > 3
// 2번 승객의 호출번호를 입력하시오. > 3
// 2번 승객의 탑승층을 입력하시오. > 4
// 2번 승객의 목적층을 입력하시오. > 2
// 0번째의 층수를 입력하시오. > 1
// 1번째의 층수를 입력하시오. > 2
// 2번째의 층수를 입력하시오. > 3
// 3번째의 층수를 입력하시오. > 4
// 
// 
// 0번 승객의 호출번호는 3입니다.
// 0번 승객의 탑승층은 2 (높이: 3.5) 입니다.
// 0번 승객의 목적층은 1 (높이: 0) 입니다.
// 1번 승객의 호출번호는 1입니다.
// 1번 승객의 탑승층은 2 (높이: 3.5) 입니다.
// 1번 승객의 목적층은 3 (높이: 7) 입니다.
// 2번 승객의 호출번호는 3입니다.
// 2번 승객의 탑승층은 4 (높이: 10.5) 입니다.
// 2번 승객의 목적층은 2 (높이: 3.5) 입니다.
// 0번째의 층수는 1 (높이: 0) 입니다.
// 1번째의 층수는 2 (높이: 3.5) 입니다.
// 2번째의 층수는 3 (높이: 7) 입니다.
// 3번째의 층수는 4 (높이: 10.5) 입니다.
/////////////////////////////////////////
