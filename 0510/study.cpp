#include <iostream>
using namespace std;

class oba{
private:
  int a;
public:
   void seta(int temp);
};

class obj : public oba{
public:
  int c;
};

class obk : public oba{
public:
  int d;
};

void oba::seta(int temp){
  a = temp;
}

int main(void){
  oba a1;
  obj j1;
  obk k1;


  return 0;
}
