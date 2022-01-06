#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void randmo(char array[]);
void ko(char array[]);
int main(void){
  char array[100];
  int i;
  srand((unsigned)time(NULL));
  randmo(array);
  ko(array);
  for(i=0;i<100;i++){
    printf("%3d > %c\n",i+1,array[i]);
  }

}

void randmo(char array[]){
  for(int i=0;i<100;i++){
    array[i]=rand()%('z'+1-'a')+'a';
  }
}

void ko(char array[]){
  for(int i=0;i<100;i++){
    if (array[i] == 'k'){
      array[i] = 'K';
    }
  }
}
    
