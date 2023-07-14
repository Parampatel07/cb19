// Write a programe to findout smallest out of given three variable without using and or and else if ladder
#include <stdio.h>
void main()
{
     int number1, number2, number3;

     printf("Enter value of number 1 ");
     scanf("%d", &number1);

     printf("Enter value of number 2 ");
     scanf("%d", &number2);

     printf("Enter value of number 3 ");
     scanf("%d", &number3);
     if (number1 == number2 && number2 == number3)
     {
          printf("All are same ");
     }
     else
     {

          if (number1 < number2)
          {
               // if number 1 smaller than number 2
               if (number1 < number3)
               {
                    printf("number 1 is smallest ");
               }
               else
               {
                    printf("number 3 is smallest ");
               }
          }
          else
          {
               // if number 2 smaller than number 1
               if (number2 < number3)
               {
                    printf("number 2 is smallest  ");
               }
               else
               {
                    printf("number 3 is smallest  ");
               }
          }
     }
}