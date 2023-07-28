// Write a programe to take input your name and print it in reverse
// param
// marap
#include <stdio.h>
void main()
{
     char name[20];
     int count = 0;
     printf("Enter your name ");
     for (count = 0; count < 20; count++)
     {
          scanf("%c", &name[count]);
          if (name[count] == '\n')
          {
               break;
          }
     }
     printf("Your reverse name is ");
     for (count = count-1; count >= 0; count--)
     {
          printf("%c", name[count]);
          // if (name[count] == '\n')
          // {
          //      break;
          // }
     }
}