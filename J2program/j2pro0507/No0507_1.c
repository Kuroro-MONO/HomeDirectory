#include <stdio.h>

int calc_sum(int m,int n)
{
  int ans;
  ans=m+n;

  return ans;
}

int main(void)
{
  int x,y,z;

  scanf("%d",&x);
  scanf("%d",&y);

  z=calc_sum(x,y);
  printf("calc_sum =%d\n" ,z);

  return 0;

}
