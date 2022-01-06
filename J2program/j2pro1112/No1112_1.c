#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void func1(int *pt, int num)
{
  int i;
  
  for (i=0; i<num; i++) {
    pt[i] = rand()%10;
  }
  
  for (i=0; i<num; i++) {
    printf("pt[%d]=%d\n", i, pt[i]);
  }
}

void func2(int *pt,int num)
{
  int MAX;
  int index;
  int i;

  index=0;
  MAX = pt[index];
  for (i=1; i<num; i++){
    if(pt[i]>MAX){
      MAX=pt[i];
      index=i;
    }
  }
  printf("%d\n",MAX);
}

int func3(int *pt, int num)
{
  int sum;
  int i;
  int index;

  index = 0;
  sum = 0;
  
  for (i=0; i<num; i++) {
    sum += pt[i];
    index = sum;
    printf("%d\n",index);
  }
  return sum;
}

int main(void)
{
  int num;
  int *pt;
  int sum;
  
  srand((unsigned)time(NULL));

  printf("(1)\n");
  printf("num=");
  scanf("%d", &num);
  
  pt = (int *)malloc(sizeof(int)*num);

  func1(pt, num);

  printf("(2)\n");
  func2(pt,num);
  
  printf("(3)\n");
  sum = func3(pt, num);
  printf("%d\n",sum);
  
  free(pt);
  
  return 0;
}

