#include <stdio.h>
#include <time.h>

int calc_second(int hour, int minute, int second) {

  return 3600*hour+60*minute+second;

}

int main(void){

  printf("%d\n",calc_second(1,30,30));

  return 0;

}
  
