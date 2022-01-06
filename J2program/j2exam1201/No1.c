#include <stdio.h>
#include <stdlib.h>

void func1(int *pt, int num)
{
  int i;
  
  for (i=0; i<num; i++) {
    pt[i] = rand()%10000;
  }
  
  for (i=0; i<num; i++) {
    printf("pt[%d]=%d\n", i, pt[i]);
  }
}

int func2(int *pt, int num){

  int count;
  int i;
  count = 0;
  i = 0;
  for (i=0; i<num; i++){
    if(pt[i]%2 == 0){
      count++;
    }
  }
  return count;
}

int func3(int *pt,int num)
{
  int max;
  int index;
  int i;
  int tmp;

  index=0;
  max = pt[index];
  for (i=1; i<num; i++){
    if(pt[i]>max){
      max=pt[i];
      index=i;
    }
  }
  tmp = pt[index];
  pt[index] = pt[0];
  pt[0] = tmp;

  index = 1;
  max = pt[index];
  for(i=2; i<num; i++){
    if(pt[i]>max){
      max = pt[i];
      index = i;
    }
  }
  return max;
}


int main(void){
  int num;
  int *pt;
  int count;
  int secmax;

  srand(1201);

  printf("(1)\n");
  printf("num=");
  scanf("%d",&num);

  pt = (int *)malloc(sizeof(int)*num);

  func1(pt, num);

  printf("(2)\n");
  count = func2(pt,num);
  printf("count = %d\n",count);

  printf("(3)\n");
  secmax = func3(pt,num);
  printf("secmax = %d\n",secmax);

  free(pt);

  return 0;
}





