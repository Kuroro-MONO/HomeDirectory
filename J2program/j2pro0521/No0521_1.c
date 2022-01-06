/*
 #include <stdio.h>

int takarakuji(int vol,int no);

int main(void){

  int money;
  money=takarakuji(52,123459);
  
    printf("%d\n",money);

  
  return 0;
}
*/















#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int takarakuji(int vol,int no);

int main(void){
  srand((unsigned)time(NULL));

  int z = 0;

  for (int i=0; i < 100; i++) {
  int x = rand()%100+1;
  int y = rand()%100000+100000;

  int money;
  money=takarakuji(x,y);
  z += money;
  if(money != 0){
    printf("vol=%d no=%d money=%d\n",x,y,money);
   
  }
  
  }

  printf("%d\n",z);

  
  return 0;
  }

