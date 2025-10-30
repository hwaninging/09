#include <stdio.h>
#include <stdlib.h>
//1. 배열의 활용 
//5명의 학생에 대한 시험성적 배열 선언 
int main(void)
{
  int i; 
  int test_score[5]; ////시험 성적 : 배열 이름  배열 크기 : 5명 
  
  //점수 넣어주는 코드  
  test_score[0] = 10;
  test_score[1] = 20;
  test_score[2] = 30;
  test_score[3] = 40;
  test_score[4] = 50;
  
  //점수 화면 출력 (반복문 활용) 
  for(i=0;i<5;i++)
  printf("grade[%i] = %i\n", i, test_score[i]); 
  
  system("PAUSE");	
  return 0;
}
