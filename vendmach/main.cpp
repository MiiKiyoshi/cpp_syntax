#include <iostream>
#include <string>

using namespace std;

class drink{
private:
  string name;
  int price;
public:
  string getname();
  void setname(string temp);

  int getprice();
  void setprice(int temp);
};

string drink::getname(){
  return name;
}
void drink::setname(string temp){
  name = temp;
}

int drink::getprice(){
  return price;
}

void drink::setprice(int temp){
  price = temp;
}

class vendmach{
private:
  string name;
  drink dri[3];
public:
  vendmach(string temp = "");
  ~vendmach();
};

vendmach::vendmach(string temp){
  string name;
  int price;
  name = temp;

  for(int i=0;i<3;i++){
    cin >> name >> price;
    dri[i].setprice(price);
    dri[i].setname(name);
  }
}

vendmach::~vendmach(){

  for(int i=0;i<3;i++){
    cout << dri[i].getprice() << "  ";
    cout << dri[i].getname() << endl;
  }

  cout << "장사 끝났습니다";
}

int main(void){
  vendmach v1;
}
