#include <stdio.h>

int main (void)
{
  int age;

  printf("age=");
  scanf("%d",&age);

  if(age>=0 && age<=110){

    if(age<6){
     printf("free\n");
    }
   
    else if(age<12){
     printf("350yen\n");
    }
   
   else if(age>=12){
     printf("700yen\n");
   }
  else 
     printf("\n");
  }

  return 0;
}
