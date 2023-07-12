// Write a C program to calculate final electricity bill based upon below given criteria. take monthly electricity unit from user as input.
// units           price  per unit
// <100            1
// >100 & <200     2
// >200 & <300     3
// >300 & <400     4
// >400            5
// also calculate 5% percentage energy charge on total bill amount & display total amount

#include <stdio.h>
void main()
{
     int unit = 0;
     int price = 0;
     int bill_amount = 0;
     float intrest = 0;
     float total_amount = 0;
     printf("Enter number of unit ");
     scanf("%d", &unit);

     if (unit <= 100)
     {
          price = 1;
     }
     else if (unit > 100 && unit <= 200)
     {
          price = 2;
     }
     else if (unit > 200 && unit <= 300)
     {
          price = 3;
     }
     else if (unit > 300 && unit <= 400)
     {
          price = 4;
     }
     else if (unit > 400)
     {
          price = 5;
     }

     bill_amount = unit * price;
     // printf("the total bill amount is %d ", bill_amount);

     intrest = bill_amount * 5 / 100;
     // printf("\nthe value of intrest is %f ",intrest);

     total_amount = bill_amount + intrest;
     printf("\nThe value of total amount is %f ",total_amount);
}