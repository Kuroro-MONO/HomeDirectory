#include<stdio.h>
void count(char array[]){
  int i;

  i = 0;
  while(array[i]!='\0'){ 
    printf("%d\n",i);
    i++;
    //  for(i=0;array[i]!='\0';i++);
  }
}
int main(void){
  char array[] = "programming";
  count(array);

  return 0;
    
}  
