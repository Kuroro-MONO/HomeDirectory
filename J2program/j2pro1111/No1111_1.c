#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void randeiko(char *pt, int n){
  for(int i=0;i<n;i++){
    pt[i]=rand()%('z'+1-'a')+'a';
  }
}

int main(){
  int n;
  int i;
  int a;
  char *pt;
  
  do{
    printf("パスワードの文字数を入力してください。8~32\n");
    scanf("%d",&n);
  }
  while(8>n || n>32);

    srand((unsigned)time(NULL));
    pt=(char *)malloc(sizeof(char)*(n+1));
    randeiko(pt,n);
  
  printf("%s",pt);
  printf("\n");
  free(pt);
  return 0;
}



      
