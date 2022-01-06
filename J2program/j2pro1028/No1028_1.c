#include <stdio.h>

void set_matrix(int ma[][4]);
void disp_matrix(int ma[][4]);

int main(void)
{
  int ma[3][4];

  set_matrix(ma);
  
  disp_matrix(ma);

  return 0;
}

void set_matrix(int ma[3][4])
{
  int i, j;
  int count;

  count = 0;
  for (i=0; i<3; i++) {
    for (j=0; j<4; j++) {
      ma[i][j] = count;
      count++;
    }
  }
}

void disp_matrix(int ma[3][4])
{
  int i, j;

  for (i=0; i<3; i++) {
    for (j=0; j<4; j++) {
      printf("%d ", ma[i][j]);
    }
    printf("\n");
  }    
  printf("\n");

}
