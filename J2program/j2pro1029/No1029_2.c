#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int *pt;
  int i;
  int n;
  int review;
  int sum=0;

  scanf("%d",&n);

  pt = (int *)malloc(sizeof(int)*n);

  for(i=0;i<n;i++){
    pt[i]=i;
  }
  for(i=0;i<n;i++){
    printf("%d人目の評価を入力してください",i+1);
      scanf("%d",&review);
      pt[i]=review;
      sum = sum+review;
  }
  
  printf("この映画の評価は%.1fです", (double)sum/n);

  return 0;
}

		     
		     
