#include<stdio.h>

int main(void){

  int x;
  int y;
  x=0;
  y=1976;

  while(y<=2021){

    x += y;

    y++;
  }
  printf("%d\n",x);

  return 0;

}
