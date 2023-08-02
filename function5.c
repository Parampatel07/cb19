// Write a programe to peform mulitplication of 2 variable using function
#include <stdio.h>

int getMulti(int a,int b)
{
     int answer = a * b;
     return answer;
}

void main()
{
     int number1, number2;
     int result;
     printf("Enter value of number 1 ");
     scanf("%d", &number1);
     printf("Enter value of number 2 ");
     scanf("%d", &number2);

     result = getMulti(number1,number2);
     printf("The value of result is %d ",result);
}