#include <stdio.h>
#include <stdlib.h>

#define SIZE 5 //a�� b�� �ٲ۴� : SIZE�� �ٲ��ش�. 
//2. �迭 �� �ݺ��� Ȱ��
//�л� ���� ��� (���� ver.) 
int main(void)
{
  int i; 
  int test_score[SIZE]; //�ٸ� ����� ���� ���� ������ �� �ְ� ǥ��. 
  int sum = 0; //�������� ������ �� �ʱ�ȭ �ʼ�. 
  printf("i���� ������ �Է��ϼ���. \n", SIZE);  //���� �Է� 
  
  
  for(i=0;i<SIZE;i++)
  {
                     scanf("%d", &test_score[i]);
                     sum += test_score[i];
}
 //���� ȭ�� ���
  #if 0 //��ó���� - #�ȿ� �ִ� �ֵ��� ��������. (=����� �Ʊ��� �������� �÷�) 
  for(i=0;i<SIZE;i++)
  printf("test_score[%i] = %i\n", i, test_score[i]);
  #endif //�����־���.
  printf("���� ���: %i\n"); 
  
  system("PAUSE");	
  return 0;
}
