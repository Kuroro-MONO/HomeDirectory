#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int i;
  int val;

  printf("RAND_MAX=%d\n", RAND_MAX);

i=0;
while (i<=20){

  printf("%d\n",rand()%6);
i++;
}
return 0;
}
