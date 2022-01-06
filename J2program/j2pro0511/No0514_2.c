
#include <stdio.h>

double pond2Kg(int pond){

  double kg;

  kg = pond*0.453592;

  return kg;
}

int main (void){

  printf("%f",pond2Kg(16));
 
  return 0;
}
