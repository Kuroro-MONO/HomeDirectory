#include<stdio.h>

int main(void){
  int x;
  int y;
  y=0;
  
  scanf("%d",&x);
  if(x<=100000){

    while(y<=x){

      if(y%3==0){

	printf("%d: imadesyo\n",y);
	y++;
      }
      else{
	printf("%d:ituyaruka\n",y);
	y++;
      }
    }
  }
  else{
    printf("error -1\n");
  }

    return 0;
  }
    
