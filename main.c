#include <stdio.h>
#include <stdlib.h>

#define SIZE 5 //a�� b�� �ٲ۴� : SIZE�� �ٲ��ش�. 
//2. �迭 �� �ݺ��� Ȱ�� (��� ����) 
int main(void)
{
  int i; 
  int test_score[SIZE]; //�ٸ� ����� ���� ���� ������ �� �ְ� ǥ��. 
  printf("i���� ������ �Է��ϼ���. \n", SIZE);  //���� �Է� 
  
  //���� ȭ�� ��� 
  for(i=0;i<SIZE;i++)
  scanf("%d", &test_score[i]);
  
  for(i=0;i<SIZE;i++)
  printf("test_score[%d] = %d\n", i, test_score[i]);
  
  system("PAUSE");	
  return 0;
}
