#include <iostream>
using namespace std;

class oba{
public:
  int a;
   void seta(int temp);
};

class obj : public oba{
public:
  int c;
};

void oba::seta(int temp){
  a = temp;
}

int main(void){
  oba a1;
  obj j1;

  
}
