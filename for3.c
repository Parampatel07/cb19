// Write a programe to print mutliplication table of 5
// 5 x 1 = 5
// 5 x 2 = 10
// 5 x 3 = 15
// 5 x 4 = 20
// ...
// 5 x 10 = 50
#include <stdio.h>
void main()
{
     int table = 0;
     int multiplier = 1;
     int answer = 0;

     printf("Enter value of table ");
     scanf("%d",&table);

     for(multiplier =1 ; multiplier <= 10 ; multiplier++)
     {
          answer = table * multiplier;
          printf("\n%d x %d = %d ", table, multiplier, answer);
     }
     // printf("\n%d x %d = %d ",table,multiplier,answer);
     // multiplier++;
     // answer = table * multiplier;
     // printf("\n%d x %d = %d ",table,multiplier,answer);
     // multiplier++;
     // answer = table *multiplier;
     // printf("\n%d x %d = %d ",table,multiplier,answer);
     // multiplier++;
     // answer = table * multiplier;
     // printf("\n%d x %d = %d ",table,multiplier,answer);
}