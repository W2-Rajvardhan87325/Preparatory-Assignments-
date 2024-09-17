/**
 * Author  :: Rajvardhan Patil
 * Question:  Write a program to accept a number from user using command line argument and display its table.
 */

#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    // The first element argv[0] is the program's name (Default)
    printf("Value of the Argv[0] ::%s\n", argv[0]);

    // Code
    printf("\n\t\tCommand Line Arguments Multiplication\n");
    if (argc > 2)
        printf("Please provide only 1 argument..!\n");
    else
    {
        printf("Multiplication Table\n");
        for (size_t i = 1; i <= 10; i++)
        {
            printf("%d * %d ::%d\n", atoi(argv[1]), i, atoi(argv[1]) * i);
        }
    }
}