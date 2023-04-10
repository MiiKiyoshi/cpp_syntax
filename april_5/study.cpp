//c++ lang with a class, fuctions
//class에 들어있는 멤버함수는 class내의 멤버변수에 마음껏 acess가능
//
//c1을 instantiation하면 c1의 멤버함수만 멤버변수의 acess가능하고
//c2을 instantiation하면 c2의 멤버함수만 멤버변수의 acess가능한것임

#include <iostream>
using namespace std;

//class circle의 정의
class circle{
  
  //멤버 변수
  public:
    int rad; 
    double totalarea; 

  void input();
  void calc();
  void output();
  
}; //세미콜론 주의!! 우리가 작성할 클래스에는 반드시 마지막에 "세미콜론" !!

void circle::input(){ //circle에 들어있는 input -> ::

  rad = 10; //class를 reference한 instance에 있는 변수에 값을 넣음

}

void circle::calc(){

  totalarea = 3.14 * rad * rad;

}

void circle::output(){

  cout << totalarea << endl;

}

int main(){

  circle c1; //object

  c1.input();
  c1.calc();
  c1.output();

  Rect r1;
  r1.input();
  r1.calc();
  r1.output();
}

//c++ lang with a class, fuctions (어디에도 속하지 않는 함수를 일반함수라고 함)

/*#include <iostream>
using namespace std;

//class circle의 정의
class circle{
  
  //멤버 변수
  public:
    int rad; 
    double totalarea; 
  
}; //세미콜론 주의!! 우리가 작성할 클래스에는 반드시 마지막에 "세미콜론" !!

circle input(){ // 이를 object(객체), instance(실체)라고 부름

  circle temp; 
  temp.rad = 10;
  return temp;

}

circle calc(circle temp){ //object
 
  temp.totalarea = 3.14 * temp.rad * temp.rad;
  return temp; //object를 return!!

}

void output(circle temp){

  cout << temp.totalarea << endl;

}

int main(){

  circle c1; //object

  c1 = input(); 
  c1 = calc(c1); 
  output(c1); 

}*/

//c lang with functions
//
/*#include <iostream>
using namespace std;

//구조체 circle의 정의
struct circle{
  
  //우리가 할 내용
  int rad; //반지름 값을 넣고 메인함수에서 연산을 취하고 
  double totalarea; //여기에 넣기
  
}; //세미콜론 주의!! 우리가 작성할 클래스에는 반드시 마지막에 "세미콜론" !!

// input -> 구조체를 반환하는 함수
struct circle input(){

  struct circle temp;
  temp.rad = 10;
  return temp;

}

struct circle calc(struct circle temp){
 
  temp.totalarea = 3.14 * temp.rad * temp.rad;
  return temp;

}

void output(struct circle temp){

  cout << temp.totalarea << endl;

}

int main(){

  struct circle c1; // 위의 구조 덩어리를 난 쓸거다
  //c1.rad = 10;
  c1 = input(); //입력 과정
  //c1.totalarea = 3.14 * c1.rad * c1.rad;
  c1 = calc(c1); //연산 과정
  //cout << c1.totalarea << endl;
  output(c1); // 출력 과정

}*/

//c lang only a main
//입력, 연산, 출력 다 따로따로 논다.
//메인 함수에 모든 절차를 다 작성해야 된다.
//
/*#include <iostream>
using namespace std;

//구조체의 정의
struct circle{
  
  //우리가 할 내용
  int rad; //반지름 값을 넣고 메인함수에서 연산을 취하고 
  double totalarea; //여기에 넣기
  
}; //세미콜론 주의!! 우리가 작성할 클래스에는 반드시 마지막에 "세미콜론" !!

int main(){

  struct circle c1; // 위의 구조 덩어리를 난 쓸거다
  c1.rad = 10;
  c1.totalarea = 3.14 * c1.rad * c1.rad;
  cout << c1.totalarea << endl;

}*/
