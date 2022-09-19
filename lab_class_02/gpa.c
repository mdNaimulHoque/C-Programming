#include <stdio.h>
#include <stdbool.h>

int main()
{
    int number_of_subject;
    printf("enter number_of_subject: ");
    scanf("%d", &number_of_subject);
    bool failed = false;

    int total_gread_point = 0;
    for (int i = 0; i < number_of_subject; i++)
    {
        int marks, gread_point;
        printf("enter marks: ");
        scanf("%d", &marks);

        if (marks >= 80 && marks <= 100)
        {
            printf("Gread = A+\n");
            gread_point = 5;
        }

        else if (marks >= 70 && marks <= 79)
        {
            printf("Gread = A\n");
            gread_point = 4;
        }

        else if (marks >= 60 && marks <= 69)
        {
            printf("Gread = A-\n");
            gread_point = 3.5;
        }
        else if (marks >= 50 && marks <= 59)
        {
            printf("Gread = B\n");
            gread_point = 3;
        }
        else if (marks >= 40 && marks <= 49)
        {
            printf("Gread = C\n");
            gread_point = 2;
        }
        else if (marks >= 33 && marks <= 39)
        {
            printf("Gread = D\n");
            gread_point = 1;
        }
        else
        {
            printf("Gread = F\n");
            gread_point = 0;
            failed = true;
        }

        total_gread_point += gread_point;

        printf("Gread Point = %d\n", gread_point);
    }
    if (failed)
    {
        printf("You have failed. GPA = 0.0");
    }

    else
    {
        double gpa = (double)total_gread_point / number_of_subject;
        printf("GPA = %0.2lf\n", gpa);
    }

    return 0;
}