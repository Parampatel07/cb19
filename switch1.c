// Write a programe to print name of days on given number 
#include<stdio.h>
void main()
{
     int day = 0 ;

     printf("Enter value of day ");
     scanf("%d",&day);

     switch(day)
     {
          // day == 1 
          case 1 :
          printf("it is Monday ");
          break;

          case 2:
          printf("it is Tuesday ");
          break;

          case 3:
          printf("it is wednesday ");
          break;

          case 4:
          printf("it is thursday ");
          break;
          
          case 5:
          printf("it is Friday ");
          break;

          case 6 :
          printf("it is saturday ");
          break;

          case 7:
          printf("it is sunday ");
          break;

          default :
          printf("invalid number ");
          break;
     }
}