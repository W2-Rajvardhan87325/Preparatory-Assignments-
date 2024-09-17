#include <stdio.h>

int main(int argc, char const *argv[])
{
    int container1=1,container2 = 1;
    int number;
    printf("Printing the fibonnaci series upto given number ::");
    scanf("%d", &number);

    int fibo = 1;
    //number-2 because the first and second elements are 1, 1.
    for (int i = 1; i <= number-2; i++)
    {
        fibo = container1 + container2;
        container1 = container2;
        container2 = fibo;
        printf("%d\t", fibo);
    }

    return 0;
}
