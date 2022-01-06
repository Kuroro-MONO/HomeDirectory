#include<stdio.h>

int main(void){

  int x;
  int y;
  x=0;
  y=0;

  while(y<=1000){

    if(y%4==0){
      x += y;
    }

    y++;
  }
  printf("%d",x);

  return 0;
}
