#include <stdio.h>

int main(){

  printf("정수\n");
  printf("%d%d\n",10,20);
  printf("%5d%5d\n",10,20); //5개의 공간을 만들고 오른쪽부터 채움
  printf("%-5d%5d\n",10,20); //5개의 공간을 만들고 왼쪽부터 채움
  printf("%05d%5d\n",10,20); //5개의 공간을 만들고 오른쪽에 채우고 나머지는 0으로 채움

  //double: float의 byte 두배
  printf("실수\n");
  printf("%f\n",20.345); //기본적으로 소수점이 6자리
  printf("%.2f\n",20.345); //<dot(.)을 포함한 전체 자리수> . <소수점 자리수>
  printf("%10.2f\n",20.345);

  return 0;
}
