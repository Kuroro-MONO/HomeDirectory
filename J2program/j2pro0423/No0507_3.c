#include <stdio.h>

int ruijyo(int x,int y)
{
  int z;
  z=1;

  while(y>0){
    z *= x  ;
      y--;
  }
  return z;
}

int main(void)
{
  int a,b,num;
  scanf("%d",&a);
  scanf("%d",&b);

  num=ruijyo(a,b);
  printf("num=%d\n",num);

  return 0;
}
  
  
