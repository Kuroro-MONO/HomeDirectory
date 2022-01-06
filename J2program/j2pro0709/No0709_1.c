#include <stdio.h>

int main (void){
  char ciphertext[] = "lpvtfotbjlpvuboptijjob";
  for (int i = 0; ciphertext[i] != '\0'; i++) {
    if(ciphertext[i]=='a'){
      ciphertext[i]='z';
    }
    else{
      ciphertext[i]--;
    }
  }
  printf("%s\n", ciphertext);

  return 0;
}
