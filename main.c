#include <stdio.h>
#include <stdlib.h>

#define SIZE 5
//3. �迭 �� ���� 
int main(void)
{
    //SIZE ũ�� �迭 ���� 
  int i; 
  int grade[SIZE];
  int score[SIZE];
  
  for(i=0;i<SIZE;i++)
  {
      grade[i] = rand()%100; //0~99������ ���� �����ϰ� ������ ��. 
}
 for(i=0;i<SIZE;i++)
  {
      score[i] = grade[i]; 
}

 //���� ȭ�� ���
  #if 1 
  for(i=0;i<SIZE;i++)
      printf("grade[%i] = %i, score[%i] = %i\n", i, grade[i], i, score[i]);
  #endif
  
  system("PAUSE");	
  return 0;
}
