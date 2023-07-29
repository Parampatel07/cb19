// Example of Multiarray
// Write a programe to store 5 subject mark for 5 student
#include <stdio.h>
void main()
{
     int students[5][5];
     int count = 0;
     int flash = 0;
     int total[5];
     float average = 0;
     for (flash = 0; flash < 5; flash++)
     {
          printf("Enter marks for student %d \n", flash + 1);
          for (count = 0; count < 5; count++)
          {
               printf("Enter marks for subject %d ", count + 1);
               scanf("%d", &students[flash][count]);
          }
     }

     for (flash = 0; flash < 5; flash++)
     {
          printf("\nMarks for student %d are : ", flash + 1);
          for (count = 0; count < 5; count++)
          {
               printf("\nSubject %d are %d", count + 1, students[flash][count]);
          }
     }
     for (flash = 0; flash < 5; flash++)
     {
          total[flash] = 0;
          for (count = 0; count < 5; count++)
          {
               total[flash] = total[flash] + students[flash][count];
          }
          printf("\nThe value of total for student %d is %d ", flash + 1, total[flash]);
     }
     average = 0;
     for(count = 0 ; count < 5 ; count++)
     {
          average = average + total[count];
     }
     average = average / 5 ;
     printf("\nThe value of average of class is %f ",average);

     
     // average = average + total[1];
     // average = average + total[2];
     // average = average + total[3];
     // average = average + total[4];
     // total[1] = 0;
     // for (count = 0; count < 5; count++)
     // {
     //      total[1] = total[1] + students[1][count];
     // }
     // printf("\nThe value of total for student 2 is %d ", total[1]);
     // total[1] = total[1] + students[1][1];
     // total[1] = total[1] + students[1][2];
     // total[1] = total[1] + students[1][3];
     // total[1] = total[1] + students[1][4];
     // total[0] = total[0]  + students[0][1];
     // total[0] = total[0]  + students[0][2];
     // total[0] = total[0]  + students[0][3];
     // total[0] = total[0]  + students[0][4];
     // printf("\nMarks for student 2 are : ");
     // for(count = 0 ; count < 5 ; count++)
     // {
     //      printf("\nSubject %d are %d",count+1,students[1][count]);
     // }
     // printf("\nSubject 3 are %d",students[1][2]);
     // printf("\nSubject 3 are %d",students[1][3]);
     // printf("\nSubject 3 are %d",students[1][4]);

     // printf("\nEnter marks for student 2 ");
     // for(count = 0 ; count < 5 ; count++)
     // {
     //      printf("Enter marks for subject %d ",count+1);
     //      scanf("%d", &students[1][count]);
     // }
     // printf("\nEnter marks for student 3 ");
     // for(count = 0 ; count < 5 ; count++)
     // {
     //      printf("Enter marks for subject %d ",count+1);
     //      scanf("%d", &students[2][count]);
     // }
     // printf("Enter marks for subject 2 ");
     // scanf("%d",&students[1][1]);
     // printf("Enter marks for subject 3 ");
     // scanf("%d",&students[1][2]);
     // printf("Enter marks for subject 4 ");
     // scanf("%d",&students[1][3]);
     // printf("Enter marks for subject 3 ");
     // scanf("%d",&students[0][2]);
}