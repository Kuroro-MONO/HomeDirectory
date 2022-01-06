#include <stdio.h>

  double calc_BMI(double weight,double height);

  int main(void){

    double a;
    double b;

    scanf("%lf",&a);
    scanf("%lf",&b);

    if(a>0&&b>0){

    printf("%f",calc_BMI(a,b));
    }
    else{
      printf("error -1");
    }
    
  }

double calc_BMI(double weight,double height){

  double BMI;
  
  BMI = weight / (height*height);

  

  return BMI;
}
