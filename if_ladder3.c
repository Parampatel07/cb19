// Write a programe to findout whether the given alphabet is vowel or not
#include <stdio.h>
void main()
{
     char letter = ' ';

     printf("Enter any alphabet ");
     scanf("%c", &letter);

     // a , e , i , o , u
     // && , ||
     if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u' || letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U')
     {
          printf("it is vowel ");
     }
     else
     {
          printf("it is consonent ");
     }
     printf("\nGoodbyee..");
}

// a > b || a < c