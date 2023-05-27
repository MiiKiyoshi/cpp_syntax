// void의 의미
// 1. 반환되는 값이 없다.
// 2. 반환되는 값의 형태를 규정할 수 없다.

// 동적 할당 사용법
//
// <type> *<pointer_name>;
// <pointer_name> = (<type> *) malloc(sizeof(<type>) * <num_of_list>);
//
// *(<pointer_name>) = 3;
// *(<pointer_name> + 1) = 4;
// *(<pointer_name> + 2) = 5;
//
// free(<pointer_name>);
//

#include <stdio.h>
#include <stdlib.h>

int main(void){

}

/*int main(void){
  int * p;
  int * p1;
  p = (int *)malloc(sizeof(int));
  *p = 10;
  p1 = p;
  p = (int *)malloc(sizeof(int));
  *p = 20;

  printf("%p\n", p1);
  printf("%p\n", p);
  free(p);
  p = NULL;

  int * p2 = (int *) 0x5623c094e2a0;
  printf("%d", *p2);
  while(1);
}*/
