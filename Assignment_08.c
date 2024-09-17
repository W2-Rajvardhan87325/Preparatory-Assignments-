/**
 * Author  :: Rajvardhan Patil
 * Question:  Write a program to read the name of a student (studentName), roll
              Number (rollNo) and marks (totalMarks) obtained. rollNo may be an
              alphanumeric string. Display the data as read. Hint: Create a Student
              structure and write appropriate functions.
 */

#include <stdio.h>

typedef struct studentInformation
{
    char sName[50];
    char rNum[10];
    int totalMarks;
} Student;
Student s1;

void takeInput()
{
    printf("Enter the Name    ::");
    scanf("%s", &s1.sName);
    printf("Enter the RollNum ::");
    scanf("%s", &s1.rNum);
    printf("Enter the Marks   ::");
    scanf("%d", &s1.totalMarks);
}

void printData()
{
    printf("\t\tPrinting Details ::\n");
    printf("Student Name     ::%s\n", s1.sName);
    printf("Student Roll Num ::%s\n", s1.rNum);
    printf("Student Marks    ::%d\n", s1.totalMarks);
}

int main(int argc, char const *argv[])
{
    printf("\t\tStudent Information\n");
    takeInput();
    printData();
    return 0;
}
