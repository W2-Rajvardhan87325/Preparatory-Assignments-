#include <stdio.h>

int main(int argc, char const *argv[])
{
    int number = 0;
    printf("Printing the nummber upto given Factorial ::");
    scanf("%d", &number);

    int Factorial = 1;
    for (int i = 1; i <= number; i++)
    {
        Factorial = Factorial * i;
        printf("%d\t", Factorial);
    }

    return 0;
}
