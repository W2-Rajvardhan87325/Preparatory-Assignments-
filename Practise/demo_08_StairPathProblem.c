/**
 * You can take 1 Step and 2 Step
 * autho :: Rajvardhan Patil
 */

#include <stdio.h>

int possibOutCm(int n)
{
    if (n == 1 || n == 2)
        return n;
    if (n == 3)
        return 4;
    return possibOutCm(n - 1) + possibOutCm(n - 2) + possibOutCm(n - 3);
}

int main(int argc, char const *argv[])
{
    int stairs = 0;
    printf("Enter the total number of Stairs ::");
    scanf("%d", &stairs);

    printf("Number of possible OutComes ::%d", possibOutCm(stairs));
    return 0;
}
