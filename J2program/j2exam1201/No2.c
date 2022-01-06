#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
  int **numberBox;
  int i, ct;

  numberBox = (int **)malloc(sizeof(int *) * 5); 

  numberBox[0] = (int *)malloc(sizeof(int) * 5);

  numberBox[1] = (int *)malloc(sizeof(int) * 5);

  numberBox[2] = (int *)malloc(sizeof(int) * 5);
			       
  numberBox[3] = (int *)malloc(sizeof(int) * 5);

  numberBox[4] = (int *)malloc(sizeof(int) * 5);
  
  ct = rand()%99 + 1;

  srand((unsigned)time(NULL));
  // 1行目
  for (i=0; i<5; i++) {
    numberBox[0][i] = ct;
  }
  // 2行目
  for (i=0; i<5; i++) {
    numberBox[1][i] = ct;
  }
  // 3行目
    for (i=0; i<5; i++) {
    numberBox[2][i] = ct;
    }
  // 4
    for (i=0; i<5; i++) {
    numberBox[3][i] = ct;
    }
  // 5
    for (i=0; i<5; i++) {
    numberBox[4][i] = ct;
    }
   // 出力
  for (i=0; i<5; i++) {
    printf("%2d", 0, i, numberBox[0][i]);
  }
  printf("\n");
  for (i=0; i<5; i++) {
    printf("%2d", 1, i, numberBox[1][i]);
  }
  for (i=0; i<5; i++) {
    printf("%2d", 2, i, numberBox[2][i]);
  }
  for (i=0; i<5; i++) {
    printf("numberBox[%d][%d]=%d\n", 3, i, numberBox[3][i]);
  }
  for (i=0; i<5; i++) {
    printf("numberBox[%d][%d]=%d\n", 4, i, numberBox[4][i]);
  }
  

  free(numberBox[0]);
  free(numberBox[1]);
  free(numberBox[2]);
  free(numberBox[3]);
  free(numberBox[4]);
  free(numberBox);

  return 0;
}

