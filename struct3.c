// Write a programe to take input for 3 student take total marks , percentage , name
#include <stdio.h>

struct student
{
     int total_marks;
     float percentage;
     char name[20];
};
// struct subject1
// {
//      int student[50]
// }
void main()
{
     struct student s[3];
     int count = 0 ;

     for(count = 0 ; count < 3 ; count++)
     {
          printf("\nEnter values for student %d ",count+1);
          printf("\nEnter your name ");
          scanf("%s", &s[count].name);
          printf("Enter your percentage ");
          scanf("%f", &s[count].percentage);
          printf("Enter your total marks ");
          scanf("%d", &s[count].total_marks);

          printf("\nThe name of student is %s ", s[count].name);
          printf("\nThe value of marks is %d ", s[count].total_marks);
          printf("\nThe value of percentage is %.2f ", s[count].percentage);
     }

     // printf("\nEnter vlaue for student 2 ");
     // printf("\nEnter your name ");
     // scanf("%s", &s2.name);
     // printf("\nEnter your percentage ");
     // scanf("%f", &s2.percentage);
     // printf("\nEnter your total marks ");
     // scanf("%d", &s2.total_marks);

     // printf("\nThe name of student is %s ", s2.name);
     // printf("\nThe value of marks is %d ", s2.total_marks);
     // printf("\nThe value of percentage is %.2f ", s2.percentage);

     // printf("\nEnter vlaue for student 3 ");
     // printf("\nEnter your name ");
     // scanf("%s", &s3.name);
     // printf("\nEnter your percentage ");
     // scanf("%f", &s3.percentage);
     // printf("\nEnter your total marks ");
     // scanf("%d", &s3.total_marks);

     // printf("\nThe name of student is %s ", s3.name);
     // printf("\nThe value of marks is %d ", s3.total_marks);
     // printf("\nThe value of percentage is %.2f ", s3.percentage);
}