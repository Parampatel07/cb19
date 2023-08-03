// Write a programe to print hollow full pyramid
#include <stdio.h>

void printTriangle(int size)
{
     int space = 0;
     int count = 0;
     int flash = 0;
     int temp = 1;
     for (space = 0; space < size-1; space++)
     {
          printf(" ");
     }
     printf("*");
     printf("\n");
     for (flash = size-2; flash > 0; flash--)
     {
          for (space = 0; space < flash; space++)
          {
               printf(" ");
          }
          printf("*");
          for (count = 0; count < temp; count++)
          {
               printf(" ");
          }
          temp = temp + 2;
          printf("*");
          printf("\n");
     }
     for (space = 0; space < size; space++)
     {
          printf("*");
          printf(" ");
     }
}

void main()
{

     int size = 0;

     printf("Enter size of triangle ");
     scanf("%d",&size);
     printTriangle(size);
     // printf("*");
     // for (count = 0; count < 5; count++)
     // {
     //      printf(" ");
     // }
     // printf("*");
     // printf("\n");
     // for (space = 0; space < 2; space++)
     // {
     //      printf(" ");
     // }
     // printf("*");
     // for(count = 0; count < 7 ; count++)
     // {
     //      printf(" ");
     // }
     // printf("*");
}