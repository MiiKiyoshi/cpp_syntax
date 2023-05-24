#include <iostream>
#include <string>

using namespace std;

class mem
{
private:
   string name;
   string pos;
   int sal;
   int age;
   int hei;
   int wei;
public:
   void setname(string tempname);
   string getname();
   void setpos(string temppos);
   string getpos();
   void setsal(int tempsal);
   int getsal();
   void setage(int tempage);
   int getage();
   void sethei(int temphei);
   int gethei();
   void setwei(int tempwei);
   int getwei();
};

void mem::setname(string tempname)
{
   name = tempname;
}
string mem::getname()
{
   return name;
}
void mem::setpos(string temppos)
{
   pos = temppos;
}
string mem::getpos()
{
   return pos;
}
void mem::setsal(int tempsal)
{
   sal = tempsal;
}
int mem::getsal()
{
   return sal;
}
void mem::setage(int tempage)
{
   age = tempage;
}
int mem::getage()
{
   return age;
}
void mem::sethei(int temphei)
{
   hei = temphei;
}
int mem::gethei()
{
   return hei;
}
void mem::setwei(int tempwei)
{
   wei = tempwei;
}
int mem::getwei()
{
   return wei;
}

class team
{
private:
   string name;
   string room;
   int won;
   string cheer;
   int count;

public:
   void setname(string tempname);
   string getname();
   void setroom(string temproom);
   string getroom();
   void setwon(int tempwon);
   int getwon();
   void setcheer(string tempcheer);
   string getcheer();
   void setcount(int tempcount);
   int getcount();
   
   mem pro[4];
};

void team::setname(string tempname)
{
   name = tempname;
}
string team::getname()
{
   return name;
}
void team::setroom(string temproom)
{
   room = temproom;
}
string team::getroom()
{
   return room;
}
void team::setwon(int tempwon)
{
   won = tempwon;
}
int team::getwon()
{
   return won;
}
void team::setcheer(string tempcheer)
{
   cheer = tempcheer;
}
string team::getcheer()
{
   return cheer;
}
void team::setcount(int tempcount)
{
   count = tempcount;
}
int team::getcount()
{
   return count;
}


int main()
{
   team t1;

   t1.setname("skt");
   t1.setroom("sinsaok");
   t1.setwon(10);
   t1.setcheer("bengi");
   t1.setcount(5);
   

   mem pro[4];
   for (int i = 0; i < 5; i++)
   {
      
      string tempname;
      string temppos;
      int tempsal;
      int tempage;
      int temphei;
      int tempwei;
      cout << "선수이름 입력" << endl;
      cin >> tempname;
      pro[i].setname(tempname);
      cout << "선수 포지션 입력" << endl;
      cin >> temppos;
      pro[i].setpos(temppos);
      cout << "선수 연봉 입력" << endl;
      cin >> tempsal;
      pro[i].setsal(tempsal);
      cout << "선수 나이 입력" << endl;
      cin >> tempage;
      pro[i].setage(tempage);
      cout << "선수 신장 입력" << endl;
      cin >> temphei;
      pro[i].sethei(temphei);
      cout << "선수 체중 입력" << endl;
      cin >> tempwei;
      pro[i].setwei(tempwei);
   }

   cout << "팀이름" << t1.getname() << endl;
   cout << "연습실 이름" << t1.getroom() << endl;
   cout << "우승 횟수" << t1.getwon() << endl;
   cout << "응원단 이름 " << t1.getcheer() << endl;
   cout << "선수의 숫자" << t1.getcount() << endl;









}
