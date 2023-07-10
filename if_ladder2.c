// Write a programe to print two digit number in words
// number = 56
// Five Six
#include <stdio.h>
void main()
{
     int number = 0;
     int first = 0, second = 0;
     printf("Enter value of number ");
     scanf("%d", &number);

     first = number / 10; // 5
     // second = number - (first*10)
     second = number % 10; // 6

     if (first == 1)
     {
          printf("One ");
     }
     else if (first == 2)
     {
          printf("Two ");
     }
     else if (first == 3)
     {
          printf("Three ");
     }
     else if (first == 4)
     {
          printf("Four ");
     }
     else if (first == 5)
     {
          printf("Five");
     }
     else if (first == 6)
     {
          printf("Six");
     }
     else if (first == 7)
     {
          printf("Seven");
     }
     else if (first == 8)
     {
          printf("Eight ");
     }
     else if (first == 9)
     {
          printf("Nine ");
     }
     else if (first == 0)
     {
          printf("Zero ");
     }

     printf(" ");
     if (second == 1)
     {
          printf("One ");
     }
     else if (second == 2)
     {
          printf("Two ");
     }
     else if (second == 3)
     {
          printf("Three ");
     }
     else if (second == 4)
     {
          printf("Four ");
     }
     else if (second == 5)
     {
          printf("Five");
     }
     else if (second == 6)
     {
          printf("Six");
     }
     else if (second == 7)
     {
          printf("Seven");
     }
     else if (second == 8)
     {
          printf("Eight ");
     }
     else if (second == 9)
     {
          printf("Nine ");
     }
     else if (second == 0)
     {
          printf("Zero ");
     }
}