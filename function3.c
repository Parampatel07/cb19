// Write a programe to peform subtraction of 2 variable 
#include<stdio.h>

void getSub(int a,int z)
{
     int answer = a - z;
     printf("The value of answer is %d ",answer);
}

void main()
{
     int number1 ;
     int number2 ; 

     printf("Enter value of number 1 ");
     scanf("%d",&number1);
     printf("Enter value of number 2 ");
     scanf("%d",&number2);
     getSub(number1,number2);

}