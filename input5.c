// Write a programe to peform split of any 2 digit number 
// number = 56 ;
// first = 5 , second = 6
#include<stdio.h>
void main()
{
     int number = 0 ; 
     int first = 0 , second = 0 ;
     printf("enter value of number ");
     scanf("%d",&number);

     first = number / 10 ;
     second = number - (first * 10  )  ;
     printf("the value of first is %d and second is %d ",first,second);
}