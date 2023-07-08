// Write a programe to findout wether the given number is negative or positive 
#include<stdio.h>
void main()
{
     int number ;

     printf("Enter value of number ");
     scanf("%d",&number);

     //check
     if(number > 0)
     {
          printf("Number is positive ");
     }
     else
     {
          printf("Number is negative ");
     }

     printf("\nGoodbyee...");
}