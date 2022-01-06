#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void func1(int *pt, int num)
{
  int i;
  
  for (i=0; i<num; i++) {
    pt[i] = rand()%1000;
  }
  
  for (i=0; i<num; i++) {
    printf("pt[%d]=%d\n", i, pt[i]);
  }
}

double func2(int *pt, int num)
{
  int sum;
  double ave;
  int i;
  
  sum = 0;
  for (i=0; i<num; i++) {
    sum += pt[i];
  }
  ave = (double)sum/num;
  return ave;
}

void func3(int *pt, int num)
{
  int i;

  for (i=num-1; i>=0; i--) {
    printf("pt[%d]=%d\n", i, pt[i]);
  }
}

int func4(int *pt, int num)
{
  int i;
  int index;
  int min;
  int tmp;
    
  index = 0;
  min = pt[index];
  for (i=1; i<num; i++) {
    if (pt[i]<min) {
      min = pt[i];
      index = i;
    }
  }
  //printf("%d, %d\n", index, min);

  tmp = pt[index];
  pt[index] = pt[0];
  pt[0] = tmp;
  
  index = 1;
  min = pt[index];
  for (i=2; i<num; i++) {
    if (pt[i]<min) {
      min = pt[i];
      index = i;
    }
  }
 
  return min;
}

int main(void)
{
  int num;
  int *pt;
  double ave;
  int second_min;
  
  srand((unsigned)time(NULL));

  printf("(1)\n");
  printf("num=");
  scanf("%d", &num);
  
  pt = (int *)malloc(sizeof(int)*num);

  func1(pt, num);
  
  ave = func2(pt, num);
  printf("(2)\n");
  printf("ave = %f\n", ave);
  
  printf("(3)\n");
  func3(pt, num);
  
  
  printf("(4)\n");
  second_min = func4(pt, num);
  printf("second min=%d\n", second_min);
  
  free(pt);
  
  return 0;
}

