#include <stdio.h>

void decima12bainary(int num);

int main (void){
  int x;
  
  scanf("%d",&x);

  decima12bainary(x);

 return 0;
}

void decima12bainary(int num){
  int y;
  int array[8];
  int i;
  y=0;
  

 if(num!=0){
    
    for(i=0;i<=8;i++){
      if(num == 0) break;
    array[i] = num%2;
    num=num/2;
    y++;
    }
    y = y-1;
    while(y>=0){
      printf("%d",array[y]);
      y--;
	}
  }
  else{
    printf("0");
  }
  printf("\n");
}
