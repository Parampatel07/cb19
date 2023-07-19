// 1
// 2 2
// 3 3 3
// 4 4 4 4
// 5 5 5 5 5
// 6 6 6 6 6 6
#include <stdio.h>
void main()
{
     int count = 1;
     int flash = 1;

     while(flash < 6 )
     {    
          count =1;
          while (count <= flash)
          {
               printf("%d ",flash);
               count++;
          }
          printf("\n");
          flash++;
     }
}