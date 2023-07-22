// Write a programe to print hollow half numbered pyramid
// https://i1.faceprep.in/fp/articles/img/55984_1580817324.png
#include <stdio.h>
void main()
{
     int count = 0;
     int space = 0;
     int flash = 1;
     printf("1");
     printf("\n");
     for (count = 0; count < 5; count++)
     {
          flash = 2;
          printf("1");
          for (space = 0; space < count; space++)
          {
               flash++;
               printf("_");
          }
          printf("%d",flash)
          printf("\n");
     }
     for (count = 1; count < 8; count++)
     {
          printf("%d",count);
     }
}