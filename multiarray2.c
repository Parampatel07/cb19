// Write a programe to store 5 match runs for 1 player find average and total arrange the runs in ascending order
#include <stdio.h>
void main()
{
     int runs[5];
     int count = 0;
     int temp = 0;
     int flash = 0;
     for (count = 0; count < 5; count++)
     {
          printf("\nEnter runs for match %d ", count + 1);
          scanf("%d", &runs[count]);
     }

     for (count = 0; count < 5; count++)
     {
          printf("\nThe runs for match %d are : %d", count + 1, runs[count]);
     }

     for(flash = 0 ; flash < 5 ; flash++)
     {
          for (count = flash+1; count < 5; count++)
          {
               if (runs[flash] > runs[count])
               {
                    temp = runs[flash];
                    runs[flash] = runs[count];
                    runs[count] = temp;
               }
          }
     }
     printf("\nPrint after sorting ");
     for (count = 0; count < 5; count++)
     {
          printf("\nThe runs for match %d are : %d", count + 1, runs[count]);
     }
     // for (count = 2; count < 5; count++)
     // {
     //      if (runs[1] > runs[count])
     //      {
     //           temp = runs[1];
     //           runs[1] = runs[count];
     //           runs[count] = temp;
     //      }
     // }
     // if(runs[1] > runs[3])
     // {
     //      temp = runs[1];
     //      runs[1] = runs[3];
     //      runs[3]=temp;
     // }

     // if(runs[0] < runs[2])
     // {
     //      temp = runs[0];
     //      runs[0] = runs[2];
     //      runs[2] = temp;
     // }
     // if(runs[0] < runs[3])
     // {
     //      temp = runs[0];
     //      runs[0] = runs[3];
     //      runs[3] = temp;
     // }
     // if(runs[0] < runs[4])
     // {
     //      temp = runs[0];
     //      runs[0] = runs[4];
     //      runs[4]= temp;
     // }
}