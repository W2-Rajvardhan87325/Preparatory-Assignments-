#include <stdio.h>

int main(int argc, char const *argv[])
{
    int number = 0;
    char loopbreaker = 'y';
    do
    {
        printf("\t\tSELECT YOUR CHOICE\n");
        printf("1.LEARN\n2.SLEEP\n");
        printf("CHOOSE ::");
        scanf("%d", &number);
        scanf("%c", &loopbreaker);
        printf("\n");
        printf("Press (y) to continue || Any other letter to exit ::");
        scanf("%c", &loopbreaker);
    } while (loopbreaker == 'y');

    return 0;
}
