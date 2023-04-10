#include <stdio.h>

// 입력
void input(int *a, int *b){
  printf("값을 입력하세요 ");
  scanf("%d", a);
  printf("값을 입력하세요 ");
  scanf("%d", b);
  printf("\n입력한 값은 %d, %d 입니다.\n", *a, *b);
}


float convert(int a, int b){
  int n = b; // b의 자릿수 계산을 위해 n에 b값을 백업

  float a_fl, b_fl, b_fl_div, val; 
  float digit = 1; // b의 자릿수

  while (n != 0){
    n = n / 10;
    digit *= 10;
  }
  
  // input을 float으로 변환
  a_fl = (float) a;
  b_fl = (float) b;

  // a의 소수점에 b을 붙이기
  b_fl_div = b_fl/digit;
  val = a_fl + b_fl_div;

  // 변환 결과 출력 후 return
  printf("변환 결과는 %g 입니다.\n\n", val);

  return val;
}

int main(void){
  int a, b;
  float conv;

  input(&a, &b);
  conv = convert(a, b);
  
  printf("주함수에서 전달받은 값은 %g입니다.\n",conv);
}
