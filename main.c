#include <stdio.h>
#include <stdlib.h>

#define SIZE 3
//2. 배열 및 반복문 활용
//학생 성적 평균 (간단 ver.)

int main(void)
{
    int test_score[SIZE];
    int i;
    int sum=0;
    
    printf("i명의 점수를 입력하세요. \n", SIZE);
    
    for(i=0;i<SIZE;i++) //반복문 
    {
        scanf("%d", &test_score[i]);
         sum += test_score[i];
    }               
    
    #if 0
    for (i=0;i<SIZE;i++)
    printf("test_score[%i] = %i\n", i, test_score[i]);
    #endif
    printf("성적 평균: %i\n", sum/SIZE); 
  
  system("PAUSE");	
  return 0;
}
