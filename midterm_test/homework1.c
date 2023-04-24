#include <stdio.h>

void input(int *a, int *b){
  printf("값을 입력하시오 ");
  scanf("%d", a);
  printf("값을 입력하시오 ");
  scanf("%d", b);
  printf("\n");
}

float convert(int a, int b){
  float a_fl = (float) a;
  float b_fl;
  int temp = b;
  int digit = 0;

  printf("입력한 값은 %d, %d입니다.\n", a, b);
    
  while(temp != 0){
    temp /= 10;
    digit++;
  }
  
  b_fl = ((float) b) / (10*digit);

  printf("변환 결과는 %g 입니다.\n\n", a_fl+b_fl);

  return a_fl + b_fl;
}

int main(void){

  int a, b;
  input(&a, &b);
  printf("주함수에 전달받은 값은 %g 입니다.\n", convert(a, b));

  return 0;
}

  




