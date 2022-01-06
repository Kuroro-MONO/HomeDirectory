#include <stdio.h>

#define NUM 10

int main() {
  int a[NUM];
  int *pt = a;
  
  for(int i = 0; i < NUM; i++){
    *(pt + i) = 0;
  }
  for (int i = 0; i < NUM; i++) {
    printf("%d ", *(pt + i));
  }
  printf("\n");
  
  return 0;
}
    
