// Write a programe to findout zodiac sign of user
#include <stdio.h>
void main()
{
     int month, date;
     printf("Enter your birth month ");
     scanf("%d", &month);
     printf("Enter your birth date ");
     scanf("%d", &date);

     if (month > 0 && month < 13)
     {
          // check
          if (month == 3 && date >= 21 && date <= 31 || month == 4 && date <= 19 && date > 0)
          {
               printf("your zodiac is aries");
          }
     }
     else
     {
          printf("invalid month ");
     }
}