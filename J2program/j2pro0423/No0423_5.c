 #include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int i;
  int val;

  printf("RAND_MAX=%d\n", RAND_MAX);

i=0;
while (i<=6000000){

  printf("%d:%d\n" , i ,rand()%6+1);
i++;
}
return 0;
}
