// Write a programe to print message "you are eligible for voting "if the users age is 18 or above and if not display message "you are not eligible for voting "
#include<stdio.h>
void main()
{
     int age = 0 ; 

     printf("Enter value of age ");
     scanf("%d",&age);

     //check 
     if(age >= 18)
     {
          printf("you are eligible for voting ");
     }
     else
     {
          printf("you are not eligible for voting ");
     }

     printf("\nGoodbyee...");
}