#include <stdio.h>
#include <stdlib.h>

#define SIZE 5
//3. �迭 �� �� 
int main(void)
{
    //SIZE ũ�� �迭 ���� 
  int i; 
  int a[SIZE] = {1,2,3,4,5};
  int b[SIZE] = {1,2,3,4,5};
  
  if(a==b) //�ùٸ��� ���� �迭 ��
  printf("The same.\n");
  else
   printf("Not same.\n");
  
  system("PAUSE");	
  return 0;
}
