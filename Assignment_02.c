/**
 * Author  :: Rajvardhan Patil
 * Question: Write a program to calculate a Factorial of a number.
 */

#include <stdio.h>

int calulateFactorial(int n)
{
    if (n == 1 || n == 0)
        return 1;
    return n * calulateFactorial(n - 1);
}

int main(int argc, char const *argv[])
{
    int number = 0;
    printf("\t\tFactorial\n");
    printf("Enter the Number to calculate factorial ::");
    scanf("%d", &number);
    printf("Factorial of %d! ::%d\n", number, calulateFactorial(number));
    return 0;
}
