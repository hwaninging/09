#include <stdio.h>
#include <stdlib.h>

#define SIZE 5 //a를 b로 바꾼다 : SIZE로 바꿔준다. 
//2. 배열 및 반복문 활용 (고급 버전) 
int main(void)
{
  int i; 
  int test_score[SIZE]; //다른 사람이 봐도 쉽게 이해할 수 있게 표현. 
  printf("i명의 점수를 입력하세요. \n", SIZE);  //점수 입력 
  
  //점수 화면 출력 
  for(i=0;i<SIZE;i++)
  scanf("%d", &test_score[i]);
  
  for(i=0;i<SIZE;i++)
  printf("test_score[%d] = %d\n", i, test_score[i]);
  
  system("PAUSE");	
  return 0;
}
