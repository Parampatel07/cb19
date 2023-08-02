// write a programe to findout area of circle 
#include<stdio.h>

float getPi()
{
     float pi = 3.14159;
     return pi;
}

void main()
{
     int radius ;
     float answer ;
     float pi;
     printf("enter value of radius ");
     scanf("%d",&radius);

     pi = getPi();

     answer = pi * (radius * radius);
     printf("The value of area of circle is %f ",answer);
}