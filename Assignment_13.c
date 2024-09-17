/**
 * Author  :: Rajvardhan Patil
 * Question:  Declare an Array of type char* (Strings) and initialize it with a few strings (hard-coded). Display the strings which are duplicated in that array.
 */

#include <stdio.h>
#include <string.h>

#define SIZE 5

void findDuplicates(char *arr[], int size)
{
    int i, j;
    int found = 0;

    for (i = 0; i < size; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (strcmp(arr[i], arr[j]) == 0)
            {
                if (!found || strcmp(arr[i], arr[0]) != 0)
                {
                    printf("Duplicate found: %s\n", arr[i]);
                    found = 1;
                }
                break;
            }
        }
    }
}

int main()
{
    char *strings[SIZE] = {
        "apple",
        "banana",
        "orange",
        "apple",
        "banana"};

    findDuplicates(strings, SIZE);

    return 0;
}
