// Write a programe to take input for 3 student take total marks , percentage , name
#include <stdio.h>

struct student
{
     int total_marks;
     float percentage;
     char name[20];
};

void main()
{
     struct student s1, s2, s3;

     printf("\nEnter values for student 1 ");
     printf("\nEnter your name ");
     scanf("%s", &s1.name);
     printf("Enter your percentage ");
     scanf("%f", &s1.percentage);
     printf("Enter your total marks ");
     scanf("%d", &s1.total_marks);

     printf("\nThe name of student is %s ", s1.name);
     printf("\nThe value of marks is %d ", s1.total_marks);
     printf("\nThe value of percentage is %.2f ", s1.percentage);

     printf("\nEnter vlaue for student 2 ");
     printf("\nEnter your name ");
     scanf("%s", &s2.name);
     printf("\nEnter your percentage ");
     scanf("%f", &s2.percentage);
     printf("\nEnter your total marks ");
     scanf("%d", &s2.total_marks);

     printf("\nThe name of student is %s ", s2.name);
     printf("\nThe value of marks is %d ", s2.total_marks);
     printf("\nThe value of percentage is %.2f ", s2.percentage);

     printf("\nEnter vlaue for student 3 ");
     printf("\nEnter your name ");
     scanf("%s", &s3.name);
     printf("\nEnter your percentage ");
     scanf("%f", &s3.percentage);
     printf("\nEnter your total marks ");
     scanf("%d", &s3.total_marks);

     printf("\nThe name of student is %s ", s3.name);
     printf("\nThe value of marks is %d ", s3.total_marks);
     printf("\nThe value of percentage is %.2f ", s3.percentage);
}