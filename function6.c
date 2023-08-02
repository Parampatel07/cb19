// Write a programe to findout bmi of user and also find cateogry
#include <stdio.h>

float foot_to_meter(int foot)
{
     float meter = foot / 3.281;
     return meter;
}

float inch_to_meter(int inch)
{
     float meter = inch / 39.37;
     return meter;
}

float add_meter(float foot_meter, float inch_meter)
{
     return foot_meter + inch_meter;
}

float get_bmi(float weight, float meter)
{
     return weight / (meter * meter);
}

void get_category(float bmi)
{
     if (bmi < 18)
     {
          printf("\nYou are underweight ");
     }
     else if (bmi >= 18 && bmi <= 24.9)
     {
          printf("\nYou are normal weight ");
     }
     else if (bmi >= 25 && bmi <= 30)
     {
          printf("\nYou are over weight ");
     }
     else if (bmi > 30 && bmi <= 34.9)
     {
          printf("\nYou are obese ");
     }
     else
     {
          printf("\nYou are extremly obese ");
     }
}

void main()
{
     float weight;
     int foot, inch;
     float foot_meter, inch_meter, total_meter, bmi;
     printf("Enter value of weight ");
     scanf("%f", &weight);

     printf("Enter value of height in foot ");
     scanf("%d", &foot);

     printf("Enter value of height in inch ");
     scanf("%d", &inch);

     foot_meter = foot_to_meter(foot);
     inch_meter = inch_to_meter(inch);

     total_meter = add_meter(foot_meter, inch_meter);
     printf("The value of total meter is %f ", total_meter);

     bmi = get_bmi(weight, total_meter);
     printf("\nThe value of bmi is %f ", bmi);

     get_category(bmi);
}