#include <stdio.h>
#include <stdlib.h>

#define SIZE 5
//3. 배열 값 비교(원래 목표) retry! 

int main(void)
{
    int i;
    int a[SIZE] = {1, 2, 3, 4, 5};
    int b[SIZE] = {1, 2, 7, 4, 5};
    int flag_same = 1;
    
    for(i=0;i<SIZE;i++) //반복문 
    {
        if (a[i] != b[i])
        {
        printf("%i-th element is dff.\n", i);
        flag_same = 0;
    }               
}  
    printf("Are a and b the same? %i\n" ,flag_same); //더 친절하게 하려면 조건문 활용 
  
  system("PAUSE");	
  return 0;
}
