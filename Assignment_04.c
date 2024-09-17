/**
 * Author  :: Rajvardhan Patil
 * Question:  Write a program to calculate the grade of a student. There are five
              subjects. Marks in each subject are entered from keyboard.
 */

#include <stdio.h>

void gradeCalc(int marks[])
{
    for (int i = 0; i < 5; i++)
    {
        if (marks[i] >= 90)
        {
            printf("Subject[%d]---Grade ::Ex\n", i + 1);
        }
        else if (marks[i] < 90 && marks[i] >= 80)
        {
            printf("Subject[%d]---Grade ::A\n", i + 1);
        }
        else if (marks[i] < 80 && marks[i] >= 70)
        {
            printf("Subject[%d]---Grade ::B\n", i + 1);
        }
        else if (marks[i] < 70 && marks[i] >= 60)
        {
            printf("Subject[%d]---Grade ::C\n", i + 1);
        }
        else if (marks[i] < 60)
        {
            printf("Subject[%d]---Grade ::F\n", i + 1);
        }
        else
        {
            printf("Error\n");
        }
    }
}

int main(int argc, char const *argv[])
{
    int marks[5];
    printf("\t\tStudent Grade Sheet\n");
    printf("Enter subject marks below...!\n");
    for (int i = 1; i <= 5; i++)
    {
        printf("Subject[%d] ::", i);
        scanf("%d", &marks[i - 1]);
    }
    printf("\t\tGrades\n");
    gradeCalc(marks);

    return 0;
}
