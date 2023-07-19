// Write a programe to print following pattern
// 1, 6, 15, 28, 45, 66, 91, 120, 153, 190, 231 .. 10000
// 1  5  9   13  17  21  25  29
// 1  4  4   4   4   4  4   4
#include <stdio.h>
void main()
{
     int number = 1;
     int answer = 0;
     int temp = 5;
     printf("%d ", number);
     answer = number + temp;

     for(temp = 5 ; answer < 10000 ; number = number + 1 )
     {
          printf("%d ", answer);
          temp = temp + 4;
          answer = answer + temp;
     }

     // printf("%d ",answer);
     // temp = temp + 4;
     // answer = answer + temp;
     // printf("%d ",answer);
     // temp = temp + 4;
     // answer = answer + temp;
     // printf("%d ",answer);
}