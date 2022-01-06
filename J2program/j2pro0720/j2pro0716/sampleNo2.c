#include <stdio.h>

void dispString(char str[]);
int countLength(char str[]);
void dispStringReverse(char str[]);
void dispOnlyNumber(char str[]);

int main(void)
{
  char str[] = "zyx98da4k5w4x097ltqdrax2cba";
  int len;
  
  printf("(1)\n");
  dispString(str);


  printf("(2)\n");
  len = countLength(str);
  printf("%d\n", len);

  
  printf("(3)\n");
  dispStringReverse(str);


  printf("(4)\n");
  dispOnlyNumber(str);
 

  return 0;
}


/*******
 * (1)
 *******/
void dispString(char str[])
{

}


/*******
 * (2)
 *******/
int countLength(char str[])
{

}


/*******
 * (3)
 *******/
void dispStringReverse(char str[])
{

}


/*******
 * (4)
 *******/
void dispOnlyNumber(char str[])
{

}
