#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("=============Printing ASCII Value of Capital Character===========\n");
    for (int i = 65; i <= 90; i++)
        printf("Character ::%c  ASCII Value ::%d\n", i, i);

    printf("=============Printing ASCII Value of Small Character=============\n");
    for (int i = 97; i <= 122; i++)
        printf("Character ::%c  ASCII Value ::%d\n", i, i);

    printf("=============Case Conversion=============\n");
    int choice = 0;
    char ch;
    printf("1.UPPERCASE TO LOWERCASE\n2.LOWERCASE TO UPPERCASE\n");
    printf("ENTER CHOICE ::");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Enter the character(UPPERCASE) ::\n");
        scanf("%c", &ch);
        scanf("%c", &ch);
        printf("OUTPUT ::%c\n", (ch + 32));
        break;
    case 2:
        printf("Enter the character(LOWERCASE) ::\n");
        scanf("%c", &ch);
        scanf("%c", &ch);
        printf("OUTPUT ::%c\n", (ch - 32));
        break;
    default:
        printf("INVALID INPUT\n");
        break;
    }

    return 0;
}
