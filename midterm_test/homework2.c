#include <stdio.h>

struct student{
  char name[10];
  char stunum[10];
  char depot[10];
  int grade;
  char phonum[10];
};

struct student input(){
  struct student s;

  scanf("%s", s.name); 
  scanf("%s", s.stunum);
  scanf("%s", s.depot);
  scanf("%d", &s.grade); 
  //구조체의 멤버변수를 integer로 write하려면 반드시 &붙여라 ㅁㅊㄴㅇ

  scanf("%s", s.phonum); 

  return s;
}

void output(struct student s){
  printf("%s %s %s %d %s", s.name, s.stunum, s.depot, s.grade, s.phonum);
}

int main(void){

  struct student s;
  s = input();
  output(s);

  
}
