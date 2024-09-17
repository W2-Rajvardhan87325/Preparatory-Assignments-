/**
 * Author  :: Rajvardhan Patil
 * Question:  Accept an integer number and when the program is executed print the binary, octal and hexadecimal equivalent of the given number.
 */

#include <stdio.h>

void printBinary(int num)
{
    unsigned int mask = 1 << 31; // Create a mask with the leftmost bit set to 1
    printf("Binary       ::");

    for (int i = 0; i < 32; i++)
    {
        if (num & mask)
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
        mask >>= 1; // Shift the mask to the right by one bit
    }
    printf("\n");
}

void formatPrint(int num)
{
    printf("Given Number ::%d\n", num);
    printBinary(num);
    printf("Octal        ::%o\n", num);
    printf("Hexadecimal  ::%X\n", num);
}

int main()
{
    int num;
    printf("Enter an Integer ::");
    scanf("%d", &num);
    printf("\t\tNumber Format Printing\n");
    formatPrint(num);
    return 0;
}
