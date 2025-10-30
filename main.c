#include <stdio.h>
#include <stdlib.h>

#define SIZE 5
//3. 배열 값 복사 
int main(void)
{
    //SIZE 크기 배열 선언 
  int i; 
  int grade[SIZE];
  int score[SIZE];
  
  for(i=0;i<SIZE;i++)
  {
      grade[i] = rand()%100; //0~99사이의 값이 랜덤하게 나오게 함. 
}
 for(i=0;i<SIZE;i++)
  {
      score[i] = grade[i]; 
}

 //점수 화면 출력
  #if 1 
  for(i=0;i<SIZE;i++)
      printf("grade[%i] = %i, score[%i] = %i\n", i, grade[i], i, score[i]);
  #endif
  
  system("PAUSE");	
  return 0;
}
