// Write a programe to findout wether the given number is odd or even 
#include<stdio.h>
void main()
{
     int number = 0;

     printf("Enter value of number ");
     scanf("%d",&number);

     if(number % 2 == 0)
     {
          printf("it is even number ");
     }
     else
     {
          printf("it is odd number ");
     }

     printf("\nGoodbyee...");
}