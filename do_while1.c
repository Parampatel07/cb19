// Write a programe to findout factorial of given number
// 5 = 5 * 4 * 3 * 2 * 1 = 120
// 6 = 6 * 5 * 4 * 3 * 2 * 1
#include <stdio.h>
void main()
{
     int number = 0;
     int answer = 0;
     int count = 2;
     printf("Enter value of number ");
     scanf("%d", &number);

     // number = 5;
     answer = number * (number - 1);
     do
     {
          answer = answer * (number - count);
          count++;
     }while(count<number);
     // answer = answer * (number - 3);
     // answer = answer * (number - 4);
     // number * number - 1
     printf("The value of answer is %d ", answer);
}