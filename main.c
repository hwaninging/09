#include <stdio.h>
#include <stdlib.h>
//1. �迭�� Ȱ�� 
//5���� �л��� ���� ���輺�� �迭 ���� 
int main(void)
{
  int i; 
  int test_score[5]; ////���� ���� : �迭 �̸�  �迭 ũ�� : 5�� 
  
  //���� �־��ִ� �ڵ�  
  test_score[0] = 10;
  test_score[1] = 20;
  test_score[2] = 30;
  test_score[3] = 40;
  test_score[4] = 50;
  
  //���� ȭ�� ��� (�ݺ��� Ȱ��) 
  for(i=0;i<5;i++)
  printf("grade[%i] = %i\n", i, test_score[i]); 
  
  system("PAUSE");	
  return 0;
}
