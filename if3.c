// Write a programe to display message "it is first letter of abcd" if the given alphabet is (a)
#include <stdio.h>
void main()
{
     char letter = '0';

     printf("Enter value of letter ");
     scanf("%c", &letter);

     // check
     if (letter != 'a')
     {
          printf("Goodbyee...");
     }

     printf("\nit is first letter of abcd ");
}