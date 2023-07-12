// 11) Write a C program to calculate income tax, gross income, net income from monthly income given by user
// yearly income     tax rate
// <3,00,000         5%

// >=3,00,000
// <5,00,000         10%

// >=5,00,000
// <8,00,000         20%

// >=8,00,000        30%
#include <stdio.h>
void main()
{
     int monthly_income = 0;
     int yearly_income = 0;
     int tax_rate = 0;
     float income_tax = 0;
     float gross_income = 0;
     printf("Enter value of monthly income  ");
     scanf("%d", &monthly_income);

     // check
     if (monthly_income <= 0)
     {
          printf("Monthly income cannot be zero or less than zero ");
     }
     else
     {
          yearly_income = monthly_income * 12;
          printf("\nThe value of yearly income is %d ", yearly_income);

          if (yearly_income < 300000)
          {
               tax_rate = 5;
          }
          else if (yearly_income >= 300000 && yearly_income < 500000)
          {
               tax_rate = 10;
          }
          else if (yearly_income >= 500000 && yearly_income < 800000)
          {
               tax_rate = 20;
          }
          else if (yearly_income >= 800000)
          {
               tax_rate = 30;
          }
          printf("\nthe value of tax rate is %d ", tax_rate);
          income_tax = yearly_income * tax_rate / 100;
          printf("\nthe value of income tax is %f ", income_tax);
          gross_income = yearly_income - income_tax;
          printf("\nthe value of gross_income is %f ", gross_income);
     }
}