/**
 * Author  :: Rajvardhan Patil
 * Question:  Write a program to check the input characters for uppercase,
              lowercase, number of digits and other characters. Display appropriate message.
 */

#include <stdio.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{
    char input;

    printf("Enter a character ::");
    scanf("%c", &input);

    if (isupper(input))
    {
        printf("The character '%c' is an uppercase letter.\n", input);
    }
    else if (islower(input))
    {
        printf("The character '%c' is a lowercase letter.\n", input);
    }
    else if (isdigit(input))
    {
        printf("The character '%c' is a digit.\n", input);
    }
    else
    {
        printf("The character '%c' is a special character or other symbol.\n", input);
    }

    return 0;
}
