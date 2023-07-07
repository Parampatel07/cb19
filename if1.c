// Write a programe to print "You are short " if height is less than 5 
#include<stdio.h>
void main()
{
     float foot ;

     printf("Ente value of foot ");
     scanf("%f",&foot);

     //check 
     // < , > , <= , >= , == , !=
     if(foot <= 5)
     {
          printf("You are short ");
     }

     printf("\nGoodbyee...");
}