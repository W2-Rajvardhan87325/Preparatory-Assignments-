/**
 * Author  :: Rajvardhan Patil
 * Question:  Write a Program to reverse the letters present in the given String. Do not use strrev() function.
 */

#include <stdio.h>
#include <string.h>

void revString(char arr[])
{
    int start = 0, end = strlen(arr) - 1;
    char temp;
    while (start < end)
    {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
    printf("Reverse String ::%s\n", arr);
}

int main(int argc, char const *argv[])
{
    char str[50];
    printf("Enter the String ::");
    scanf("%s", &str);
    revString(str);
    return 0;
}
