// Example of input 
#include<stdio.h>
#include<stdlib.h>
void main()
{
     int number = 0;
     float num1 = 0;
     char letter='a';

     printf("Enter value of number only whole number");
     scanf("%d",&number);
     printf("Enter value of num1 ");
     scanf("%f",&num1);
     fflush(stdin);
     printf("Enter any one letter ");
     scanf("%c",&letter);

     printf("the value of number is %d ",number);
     printf("\nthe value of num1 is %f ",num1);
     printf("\nthe alphabet is %c ",letter);
}
