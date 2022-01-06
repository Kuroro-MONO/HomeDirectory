#include<stdio.h>
int is3bai(int x);
int iscon3(int x);

int main(void)
{
  int scn;
  int loop;
  
  scanf("%d",&scn);

  if (scn >= 100000)
    {
      return -1;
    }
  
  for(int i = 0; i <= scn; i++)
    {

      if(is3bai(i) || iscon3(i))
	{
	  printf("%d : imadesyo\n",i);
	}
      else
	{
	  printf("%d : ituyaruno?\n",i);
	}
    }
  
  return 0;
}


int is3bai(int x)
{
   
  if((x%3)==0)
    {
      return 1;
    }
  else
    {
      return 0;
    }
}

int iscon3(int x)
{
  while(x > 0)
    {
      if((x%10)==3)
	{
	  return 1;
	}
      x=x/10;
    }
  return 0;
}
