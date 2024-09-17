/**
 * Author  :: Rajvardhan Patil
 * Question:  Write a code to check if string is palindrome.
 */

#include <stdio.h>
#include <string.h>

#define SIZE 50

void isPalindrome(char arr[SIZE])
{
    int start = 0, end = strlen(arr) - 1;
    char temp;
    char originalstr[SIZE];
    strcpy(originalstr, arr);

    while (start < end)
    {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }

    if (strcmp(originalstr, arr) == 0)
    {
        printf("It is a Palindrome\n");
    }
    else
    {
        printf("Not a Palindrome\n");
    }
}

int main()
{
    char str[SIZE];

    printf("Enter the String: ");
    scanf("%s", str);

    isPalindrome(str);

    return 0;
}
