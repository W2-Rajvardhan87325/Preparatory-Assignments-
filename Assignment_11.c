/**
 * Author  :: Rajvardhan Patil
 * Question:  Create a structure called Employee that includes three fields - a first
              name (type String), a last name (type String) and a monthly salary (double).
              Write functions to initialize the fields, print them and modify the values in the given object.
 */

#include <stdio.h>
#include <string.h>

#define MAX_NAME_LENGTH 50

struct emp
{
    char firstName[MAX_NAME_LENGTH];
    char lastName[MAX_NAME_LENGTH];
    double monthlySalary;
};

void emp_init(struct emp *e, const char *firstName, const char *lastName, double salary)
{
    strncpy(e->firstName, firstName, MAX_NAME_LENGTH);
    strncpy(e->lastName, lastName, MAX_NAME_LENGTH);
    e->monthlySalary = salary;
}

void set_salary(struct emp *e, double sal)
{
    e->monthlySalary = sal;
}

void emp_display(struct emp *e)
{
    printf("Employee       :: %s %s\n", e->firstName, e->lastName);
    printf("Monthly Salary :: %.2f\n", e->monthlySalary);
    printf("Yearly Salary  :: %.2f\n", e->monthlySalary * 12);
}

int main()
{
    struct emp emp1, emp2;

    emp_init(&emp1, "Rajvardhan", "Patil", 300000.00);
    emp_init(&emp2, "Dhanashri", "Bhosale", 3503430.00);
    printf("\t\tDETAILS\n");
    printf("Before Raise:\n");
    emp_display(&emp1);
    emp_display(&emp2);

    // Give each Employee a 10% raise
    set_salary(&emp1, emp1.monthlySalary * 1.10);
    set_salary(&emp2, emp2.monthlySalary * 1.10);

    printf("\nAfter 10%% Raise:\n");
    emp_display(&emp1);
    emp_display(&emp2);

    return 0;
}
