#include<stdio.h>
void count(char array[]){
  int i;
  int k=0;
  for(i=0;array[i]!='\0';i++){
    if(array[i]==' '){
      k++;
    }
  }
  printf("%d\n",k+1);
}

int main(void){
  char array[] = "Which do you think more exciting, soccer or baceball?";
  count(array);

  return 0;
    
}  
