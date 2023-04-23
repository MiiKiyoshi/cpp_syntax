#include <iostream>
#include <string>

using namespace std;

int main(){ // char name[10]; name[2]

  string name = "test";
  name.insert(2, "xx"); // 0:배열의 위치
  cout << name << endl;
  cout << name.find("st") << endl;
  cout << name.substr(2) << endl; //2번째 글자부터 모두 추출하라
  cout << name.substr(2,2) << endl; //2번째 글자부터 2글자 추출하라

  return 0;
}
/*#include <iostream>
#include <string>

using namespace std;

int main(){

  string name = "12345678"; // string의 객체를 만든거임
  cout << name << " " << name.length() << endl; // 메소드

  string cpname;
  cpname = name; //객체를 만들고 유동적인 배열공간을 만들어 대입

  cout << cpname << " " << cpname.length() << endl; // 메소드

  cpname = cpname + "add"; //concatenation (strcat 하는거임) 유동적인 배열공간 굳굳
  cout << cpname << " " << cpname.length() << endl; // 메소드

  return 0;
}
*/
/*
#include <iostream>
#include <string.h>

using namespace std;

int main(){

  char name[8] = "hong";
  cout << name << " " << strlen(name) << endl; // strlen(): NULL 제외한 순수한 문자의 길이
  strcpy(name, "kim"); 
  cout << name << " " << strlen(name) << endl;
  

  return 0;
}*/
