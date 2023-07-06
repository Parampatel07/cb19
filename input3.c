// Write a programe to findout bmi of user
// weight / height * height
// kg / (height * height) m
#include <stdio.h>
void main()
{
     float weight = 0;
     int foot = 0;
     int inch = 0;
     float foot_meter = 0, inch_meter = 0 ,total_meter = 0,bmi = 0;

     printf("Enter value of weight in kg ");
     scanf("%f", &weight);

     printf("Enter your height in foot/feet ");
     scanf("%d", &foot);

     printf("Enter your height in inch ");
     scanf("%d", &inch);

     printf("the value of weight is %f ", weight);
     printf("\nthe value of height in foot is %d and inch is %d ", foot, inch);

     foot_meter = foot / 3.281;
     printf("\nThe value of foot meter is %f ", foot_meter);

     inch_meter = inch / 39.37;
     printf("\nThe value of inch meter is %f ", inch_meter);

     total_meter = foot_meter + inch_meter ; 
     printf("\nthe value of total meter is %f ",total_meter);

     bmi = weight / (total_meter * total_meter);
     printf("\n\nthe value of your bmi is %f ",bmi);
}