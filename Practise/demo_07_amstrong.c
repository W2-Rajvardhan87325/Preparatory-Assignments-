#include <stdio.h>

int main(int argc, char const *argv[])
{
    int number = 0;
    printf("Enter the number ::");
    scanf("%d", &number);

    int enteredNumber = number;
    int lastDigit = 0, cube = 0, formedNumber = 0;
    while (number != 0)
    {
        lastDigit = number % 10;
        number = number / 10;
        cube = lastDigit * lastDigit * lastDigit;
        formedNumber = formedNumber + cube;
    }

    if (enteredNumber == formedNumber)
        printf("Number is Amstrong\n");
    else
        printf("Number is not Amstrong\n");

    return 0;
}
