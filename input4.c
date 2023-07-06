// % - modulus 
// Example of modulus 
#include<stdio.h>
void main()
{
     int number1 = 7 ;
     int number2 = 3 ;
     float answer = 0;

     answer = number1 / number2;
     printf("\nthe value of answer via division = %f ",answer);

     answer = number1 % number2;
     printf("\nthe value of answer via modulus  = %f ",answer);

}