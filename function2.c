#include <stdio.h>
void printLine(char symbol , int size)
{
     int count = 0;
     for(count = 0 ;count < size ; count++)
     {
          printf("%c",symbol);
     }
}
void main()
{
     char symbol;
     int size;
     
     printf("Enter symbol for line ");
     scanf("%c",&symbol);
     printf("Enter size for line ");
     scanf("%d",&size);

     printLine(symbol,size);
     printf("\nParam Patel \n");
     printLine(symbol,size);
}