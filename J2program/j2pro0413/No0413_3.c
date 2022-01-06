#include <stdio.h>

int main(void)
{
  int a;
  int b,c=0;
  
  scanf("%d",&a);
  
  for(b=0;b<=a;b++)
    if(b%2 ==0) {
     
      c=c+b;
    }
  printf("%d\n",c);

  return 0;
}
    
