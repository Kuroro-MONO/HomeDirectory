#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void){
  int floor;
  int room;
  srand((unsigned)time(NULL));
  floor=((rand()%5)+1)*100;
  room=(rand()%5)+1;

    printf("%d",floor+room);

  return 0;

}
