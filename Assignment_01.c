/**
 * Author  :: Rajvardhan Patil
 * Question:Write a program to input n numbers on command line argument and
            calculate maximum of them.
 */

#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    // The first element argv[0] is the program's name (Default)
    printf("Value of the Argv[0] ::%s\n", argv[0]);

    // Code
    printf("\n\t\tCommand Line Arguments\n");
    if (argc < 2)
        printf("Please provide atleast 1 argument..!\n");
    else
        printf("Total Number of arguments ::%d\n", argc - 1);

    int max = 0;
    printf("Arguments entered :\n");
    for (int i = 1; i < argc; i++)
    {
        printf("%d ", atoi(argv[i]));
        if (atoi(argv[i]) > max)
            max = atoi(argv[i]);
    }
    printf("\nMaximum ::%d\n", max);

    return 0;
}
