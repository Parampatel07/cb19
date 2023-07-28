// Write a programe to take name as an input
#include <stdio.h>
void main()
{
     char name[20];
     int count = 0;
     printf("Enter your name ");
     for (count = 0; count < 20; count++)
     {
          scanf("%c", &name[count]);
          if(name[count]=='\n')
          {
               //true
               break;
          }
     }
     printf("Your name is : ");
     for(count = 0 ; count<20 ; count++)
     {
          printf("%c", name[count]);
          if(name[count]=='\n')
          {
               break;
          }
     }
     // printf("%d",name[1]);
     // printf("%d",name[2]);
     // printf("%d",name[3]);
     // printf("%d",name[4]);
     // printf("%d",name[5]);
     // printf("%d",name[6]);
     // printf("%d",name[7]);
     // scanf("%c",&name[1]);
     // scanf("%c",&name[2]);
     // scanf("%c",&name[3]);
     // scanf("%c",&name[4]);
     // scanf("%c",&name[5]);
     // scanf("%c",&name[6]);
}