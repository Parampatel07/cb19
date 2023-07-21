// Write a programe to print hollow inverted half pyramid
#include <stdio.h>
void main()
{

     int count = 0;
     int flash = 0;
     int temp = 3;
     for (count = 0; count < 6; count++)
     {
          printf("*");
     }

     for(flash = 0 ; flash < 4 ; flash++)
     {
          printf("\n");
          printf("*");
          for (count = 0; count < temp; count++)
          {
               printf(" ");
          }
          printf("*");
          temp--;
     }
     // printf("\n");
     // printf("*");
     // for (count = 0; count < 2; count++)
     // {
     //      printf("_");
     // }
     // printf("*");
     // printf("\n");
     // printf("*");
     // printf("_");
     // printf("*");
     // printf("\n");
     // for (count = 0; count < 2; count++)
     // {
     //      printf("*");
     // }
     printf("\n");
     printf("*");
}