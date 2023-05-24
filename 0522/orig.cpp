#include <iostream>
using namespace std;

class base{
public:
  void output();
};

void base::output(){
  cout << "base object" << endl;
}

class child1{
public:
  void output();
};


void child1::output(){
  cout << "child1 object" << endl;
}

int main(void){

  base b1;
  child1 c1;
  b1.output();
  c1.output();

}
