#include <stdio.h>
#include <stdlib.h>

#define SIZE 5 //a를 b로 바꾼다 : SIZE로 바꿔준다. 
//2. 배열 및 반복문 활용
//학생 성적 평균 (간단 ver.) 
int main(void)
{
  int i; 
  int test_score[SIZE]; //다른 사람이 봐도 쉽게 이해할 수 있게 표현. 
  int sum = 0; //누적으로 연산할 때 초기화 필수. 
  printf("i명의 점수를 입력하세요. \n", SIZE);  //점수 입력 
  
  
  for(i=0;i<SIZE;i++)
  {
                     scanf("%d", &test_score[i]);
                     sum += test_score[i];
}
 //점수 화면 출력
  #if 0 //전처리기 - #안에 있는 애들이 지워진다. (=지우긴 아깝고 컴파일은 시러) 
  for(i=0;i<SIZE;i++)
  printf("test_score[%i] = %i\n", i, test_score[i]);
  #endif //막아주었다.
  printf("성적 평균: %i\n"); 
  
  system("PAUSE");	
  return 0;
}
