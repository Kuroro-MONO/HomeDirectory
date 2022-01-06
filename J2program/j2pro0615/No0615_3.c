#include <stdio.h>

char my_toupper(char ch);

int main(void){
  char ch;
  int k;

  scanf("%c",&k);

  ch = my_toupper(k);
  printf("%c\n",ch);
  
  return 0;
}
char my_toupper(char ch){
  
    if('a'<= ch && ch <= 'z'){
      ch = ch-('a'-'A');
    }
    return ch;
}
