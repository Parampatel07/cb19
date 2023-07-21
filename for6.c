// Write a programe to print hollow inverted half pyramid
#include <stdio.h>
void main()
{

     int count = 0;
     int flash = 0;
     int temp = 3;
     int size = 0;

     printf("Enter value of size ");
     scanf("%d",&size);
     for (count = 0; count < size; count++)
     {
          printf("*");
     }
     temp = size - 3;
     for(flash = 0 ; flash < size-2 ; flash++)
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