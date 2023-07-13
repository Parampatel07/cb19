// Write a programe to findout how many days user given month has you cannot use else if ladder you cannot use and or
// 1      - 31 days
// 2      - 28 days in a common year and 29 days in leap years
// 3      - 31 days
// 4      - 30 days
// 5     - 31 days
// 6     - 30 days
// 7     - 31 days
// 8      - 31 days
// 9      - 30 days
// 10     - 31 days
// 11    - 30 days
// 12     - 31 days
#include <stdio.h>
void main()
{
     int month = 0;

     printf("Enter value of month ");
     scanf("%d", &month);

     if (month > 0)
     {
          if (month <= 12)
          {
               if(month == 2)
               {
                    printf("it has 28-29 days ");
               }
               else
               {
                    if(month <= 7 )
                    {
                         //less than 7 
                         if(month % 2 == 0)
                         {
                              printf("it has 30 days ");
                         }
                         else
                         {
                              printf("it has 31 days ");
                         }
                    }
                    else
                    {
                         //greater than 7 
                         if(month % 2 != 0)
                         {
                              printf("it has 30 days ");
                         }
                         else
                         {
                              printf("it has 31 days ");
                         }
                    }
               }
          }
          else
          {
               printf("Invalid month ");
          }
     }
     else
     {
          printf("Invalid month ");
     }
}