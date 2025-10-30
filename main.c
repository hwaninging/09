#include <stdio.h>
#include <stdlib.h>

#define SIZE 5
//3. 배열 값 비교 
int main(void)
{
    //SIZE 크기 배열 선언 
  int i; 
  int a[SIZE] = {1,2,3,4,5};
  int b[SIZE] = {1,2,3,4,5};
  
  if(a==b) //올바르지 않은 배열 비교
  printf("The same.\n");
  else
   printf("Not same.\n");
  
  system("PAUSE");	
  return 0;
}
