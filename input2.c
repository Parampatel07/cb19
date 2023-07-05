// Write a programe to findout area of rectangle 
// lenght * breath 
#include<stdio.h>
void main()
{
     float lenght = 0;
     float breath = 0;
     float answer = 0;

     printf("Enter value of lenght ");
     scanf("%f",&lenght);

     printf("Enter value of breath ");
     scanf("%f",&breath);

     printf("\nthe value of lenght is %f and breath is %f ",lenght,breath);

     answer = lenght * breath ; 
     printf("\nthe answer is %f ",answer);
}