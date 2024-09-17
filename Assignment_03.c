/**
 * Author  :: Rajvardhan Patil
 * Question:  Write a program to calculate Fibonacci Series up to n numbers.
 */

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int container1 = 1, container2 = 1;
    int number;
    printf("\t\tFibonacci Series\n");
    printf("Printing the fibonnaci series upto given number ::");
    scanf("%d", &number);

    int fibo = 1;
    printf("Fibonacci Series:%d ", container1);
    if (number > 1)
    {
        printf("%d ", container2);
    }
    for (int i = 3; i <= number; i++)
    {
        fibo = container1 + container2;
        container1 = container2;
        container2 = fibo;
        printf("%d ", fibo);
    }

    return 0;
}