#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void initArray();

int array[26];
int ramnum[5];
int flag[26];

int main (void){
  int val;
  int i;
  int a=26;
  initArray();
  srand((unsigned)time(NULL));
  while(i<5){
    val=rand()%a;
    if(flag[val]==0){
    flag[val] = 1;
    printf("%c",array[val]);
    ramnum[val] = array[val];
    i++;
    }
   }
  printf("\n");

  return 0;
}
void initArray(){
  int i=0;
  for(char c = 'A';c<='Z';c++){
    flag[i]=0; // 0dattaratukattenai
    array[i]=c;
    i++;
  }
}
