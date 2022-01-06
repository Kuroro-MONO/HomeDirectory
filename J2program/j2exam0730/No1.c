#include <stdio.h>
#include <stdlib.h>

#define NUM 30

void dispString_Odd(char str[]);

int main(void)
{
  char box[NUM+1];
  char

  srand(730);

  int i=0;
  while(i<NUM){
    box[i] = dispString_Odd(str[i]);
    i++;
  }

  printf("%s\n",box[i]);

  return 0;
}


void dispString_Odd(char str[]){
  for(int i=0;i<30;i++){
    str[i]=rand()%('z'+1-'a')+'a';
  }
}
