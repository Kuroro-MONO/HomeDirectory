#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void initArray();

int array[62];

int main (void){
  int val;
  int i;
  initArray();
  srand((unsigned)time(NULL));
  for(i=0;i<8;i++){
  val =rand()%63;
    printf("%c",array[val]);
  }
  printf("\n");

  return 0;
}
void initArray(){
  int i=0;
  for(char c = 'A';c<='Z';c++){
    array[i] =c;
    i++;
  }
  for(char c = 'a';c<='z';c++){
    array[i] =c;
    i++;
  }
  for(char c = '0';c<='9';c++){
    array[i] =c;
    i++;
  }
}
  
    

  
