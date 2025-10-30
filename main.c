#include <stdio.h>
#include <stdlib.h>

#define SIZE 5
//3. 배열 값 비교 (원래 목표) 
int main(void)
{
    //SIZE 크기 배열 선언 
  int i; 
  int a[SIZE] = {1,2,3,4,5};
  int b[SIZE] = {1,2,3,4,5};
  int flag_same = 1;
  
  for (i=0;i<SIZE;i++)
  {
      if (a[i] != b[i])
      printf("%i-th element is diff.\n", i);
      flag_same=0;
      } 
      
  printf("Are a and b the same? %i\n", flag_same);
  
  system("PAUSE");	
  return 0;
}
