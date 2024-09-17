/**
 * Author  :: Rajvardhan Patil
 * Question:  Read at most 10 names of students and store them into an array of
              char nameOfStudents[10][50]. Sort the array and display them back.
 */

#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 10
#define MAX_NAME_LENGTH 50

void sortNames(char names[MAX_STUDENTS][MAX_NAME_LENGTH], int count)
{
    char temp[MAX_NAME_LENGTH];
    for (int i = 0; i < count - 1; i++)
    {
        for (int j = i + 1; j < count; j++)
        {
            if (strcmp(names[i], names[j]) > 0)
            {
                // Swap names[i] and names[j]
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }
}

int main()
{
    char nameOfStudents[MAX_STUDENTS][MAX_NAME_LENGTH];
    int count = 0;

    printf("Enter up to 10 student names (press Enter after each name, and type 'done' when finished):\n");

    while (count < MAX_STUDENTS)
    {
        printf("Enter name %d: ", count + 1);
        fgets(nameOfStudents[count], MAX_NAME_LENGTH, stdin);

        // Remove newline character if present
        size_t len = strlen(nameOfStudents[count]);
        if (len > 0 && nameOfStudents[count][len - 1] == '\n')
        {
            nameOfStudents[count][len - 1] = '\0';
        }

        // Stop if the user types "done"
        if (strcmp(nameOfStudents[count], "done") == 0)
        {
            break;
        }

        count++;
    }

    // Sort the names
    sortNames(nameOfStudents, count);

    printf("\nSorted names:\n");
    for (int i = 0; i < count; i++)
    {
        printf("%s\n", nameOfStudents[i]);
    }

    return 0;
}
