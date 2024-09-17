/**
 * Author  :: Rajvardhan Patil
 * Question:  Input a string from the user. Count occurrences (case insensitive) of each alphabet in the string.

 */

#include <stdio.h>
#include <ctype.h>

#define ACOUNT 26

void countAlphabets(const char *str)
{
    int count[ACOUNT] = {0};

    for (int i = 0; str[i] != '\0'; i++)
    {
        char ch = tolower(str[i]);
        if (ch >= 'a' && ch <= 'z')
        {
            count[ch - 'a']++;
        }
    }

    for (int i = 0; i < ACOUNT; i++)
    {
        if (count[i] > 0)
        {
            printf("%c: %d\n", 'a' + i, count[i]);
        }
    }
}

int main()
{
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    countAlphabets(str);

    return 0;
}
