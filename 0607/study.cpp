#include <iostream>
#include <fstream>
using namespace std;

int main(void){
  ifstream fe2("input.txt"); //읽어들이는 용도
  ofstream fe3("output.csv"); //출력하는 용도
  int v;
  int c;
  int i;

  if(fe2.is_open() == true){
    for (i=0; i<10; i++){
      fe2 >> v >> c;
      cout << v << " " << c << endl;
      fe3 << v << ", " << c << ", " << v*c << endl;
    }

    fe2.close();
    fe3.close();
  }
}

/*int main(void){
  ofstream fe1("input.txt"); //파일 입출력 객체

  int v = 10;
  int c = 20;
  int i;

  if(fe1.is_open() == true){ //파일이 열렸다면
    cout << "파일 정상" << endl;

    //cout << 10 << " " << 20 << endl;
    //fe1 << 10 << " " << 20 << endl;
    
    for (i = 0; i < 10; i++){
      cout << v+i << " " << c+i*5 << endl;
      fe1 << v+i << " " << c+i*5 << endl;
    }
    fe1.close();
  }

  else{
    cout << "파일 오류" << endl;
  }
}*/
