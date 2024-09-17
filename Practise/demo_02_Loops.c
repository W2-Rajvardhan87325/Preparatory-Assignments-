#include <stdio.h>

int main(int argc, char const *argv[])
{
    // Random Series by AP 100 97 94 91 88 85 82
    for (int i = 100; i > 0; i = i - 3)
        printf("%d ", i);
    printf("\n");
    // Print 20 Even Number
    for (int i = 2; i < 2 * 20; i += 2)
        printf("%d ", i);
    printf("\n");
    // Print 20 Odd Number
    for (int i = 1; i < (2 * 20) - 1; i += 2)
        printf("%d ", i);
    printf("\n");
    // Random series 100 50 25 12 6 3 1
    for (int i = 100; i > 0; i /= 2)
        printf("%d ", i);

    // Prime Number
    printf("================Prime Numbers=============\n");
    int number, checker = 1;
    printf("Enter the Number :");
    scanf("%d", &number);
    for (int i = 2; i < number - 1; i++)
        if (number % i == 0)
        {
            printf("The number is not prime");
            checker = 0;
            break;
        }
    if (checker)
        printf("The number is Prime\n");

    return 0;
}
