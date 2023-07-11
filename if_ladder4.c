// Write a programe to findout largest variable out of given 3 variables
#include <stdio.h>
void main()
{
     int number1 = 0, number2 = 0, number3 = 0;

     printf("Enter value of number 1 ");
     scanf("%d", &number1);

     printf("Enter value of number 2 ");
     scanf("%d", &number2);

     printf("Enter value of number 3 ");
     scanf("%d", &number3);

     // check
     if (number1 >= number2 && number1 >= number3)
     {
          printf("number 1 is largest ");
     }
     else if (number2 >= number1 && number2 >= number3)
     {
          printf("number 2 is largest ");
     }
     else if (number3 >= number1 && number3 >= number2)
     {
          printf("number 3 is largest ");
     }
     else
     {
          printf("All are same ");
     }
}