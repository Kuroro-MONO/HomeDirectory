#include <stdio.h>

int hikaku3(int x,int y,int z)
{
  int small;
  
    small = x;
  
    if(y<small){
    small = y;
    }
    if(z<small){
      small=z;
    }

    return small;
}

int main(void)
{
  int a,b,c;
  int result;

  //scanf("%d %d %d",&a ,b ,c );
  scanf("%d",&a);
  scanf("%d",&b);
  scanf("%d",&c);
  result=hikaku3(a,b,c);
  printf("result=%d\n",result);

  return 0;

}
