// Write a programe to print following pattern
// 2,4,6,8,10....1000
#include <stdio.h>
void main()
{
     int number = 2;

     for(number = 2 ; number < 1000 ; number = number + 2)
     {
          printf("%d ", number);
          // number = number + 2;
     }
     // printf("%d ",number);
     // number = number + 2 ;
     // printf("%d ",number);
     // number = number + 2;
     // printf("%d ",number);
}