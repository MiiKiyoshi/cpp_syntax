#include <iostream>
#define FLOOR2FLOOR 3.5 //한층당 3.5미터

using namespace std;

class floor{
private:
  int num; //층수
  double height; //층의 고도
public:
  void set_num(int temp);
  int get_num(void);

  double get_height(void);
};

void floor::set_num(int temp){
  if((temp>0)&&(temp<5)){
    num = temp; 
    height = (num - 1) * FLOOR2FLOOR;
  }
}

int floor::get_num(void){
  return num;
}

double floor::get_height(){
  return height;
}

class passenger{
private:
  int num;
  floor boarding, destination;
public:
  void set_num(int temp);
  int get_num(void);

  void set_board(floor temp);
  floor get_board(void);

  void set_desti(floor temp);
  floor get_desti(void);
};

void passenger::set_num(int temp){
  num = temp;
}

int passenger::get_num(void){
  return num;
}

void passenger::set_board(floor temp){
 //if((temp.get_num()>0)&&(temp.get_num()<5)) 이런거 할 필요 없다.
  boarding = temp;
}

floor passenger::get_board(void){
  return boarding;
}

void passenger::set_desti(floor temp){
  destination = temp;
}

floor passenger::get_desti(void){
  return destination;
}

#define NUM_OF_FLOOR 4
#define MAX_NUM_PASSENGER 5

class elevator{
private:
  string name;
  floor queue[NUM_OF_FLOOR];
  passenger boarding[MAX_NUM_PASSENGER];
public:
  void set_name(string temp);
  string get_name(void);

  void set_queue();
  void set_boarding(int call_num, int board_floor);
};

void elevator::set_boarding(void){

  for(int i; i<MAX_NUM_PASSENGER; i++){
    std::cin > queue[i].set_num(call_num);
  }


  
};
