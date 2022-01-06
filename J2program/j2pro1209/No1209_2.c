#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
  int **numberBox;
  int *flag;
  
  numberBox = (int **)malloc(sizeof(int *) * 5);
  flag = (int*)malloc(sizeof(int) * 100);

  //initialaze flag array
  for (int i = 0; i < 100; i++) {
    flag[i] = 0;
  }

  //put numberBox size
  for (int i = 0; i < 5; i++) {
    numberBox[i] = (int *)malloc(sizeof(int) * 5);
  }

  //initalaze random seed
  srand((unsigned) time (NULL));

  //set bingo card
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      int k = rand() % 100;    
      if (flag[k] == 0) {
	flag[k] = 1;
	numberBox[i][j] = k;
  	continue;	
      } else {
	j--;
	continue;
      }
    } 
  }

  numberBox[2][2] = 0;
  
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      printf("%2d ", numberBox[i][j]);
    }
    printf("\n");
  }

  printf("\n");

  free(numberBox);

  return 0;
}

