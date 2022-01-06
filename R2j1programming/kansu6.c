#include <stdio.h>

int min(int a,int b){
  int k;
  if (a<b) { k=a; }
  else {k=b;}

  return k;
}

int and (int a,int b){
  return min(a,b);

}

int main (void){

  int i,k;
  for (i=0;i<=1;i++)
    for(k=0;k<=1;k++)

      printf("%d\n",and(i,k));

  return 0;
}
