#include <stdio.h>

double yardToMeter(int yard){

  double meter;

  meter = yard*0.9144;

  return meter;
}

int main (void){

  printf("%f",yardToMeter(300));
 
  return 0;
}
