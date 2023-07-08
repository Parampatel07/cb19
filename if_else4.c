// Write a programe to findout smaller variable out of given 2 variables
#include <stdio.h>
void main()
{
     int a = 0;
     int b = 0;

     printf("Enter value of a ");
     scanf("%d", &a);
     printf("Enter value of b ");
     scanf("%d", &b);

     // check
     if (a < b)
     {
          printf("a is smaller ");
     }
     else
     {
          printf("\nb is smaller ");
     }
     printf("\nGoodbyee...");
}