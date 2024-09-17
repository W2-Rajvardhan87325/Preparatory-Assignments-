#include <stdio.h>

int main(int argc, char const *argv[])
{
    int radius = 0;
    const float PI = 3.1415926;
    float volume = 0.0;
    printf("=========Calulate Volume of Sphere=======\n");
    printf("Enter the radius :");
    scanf("%d", &radius);
    volume = (4 * (PI * radius * radius * radius)) / 3;
    printf("Volume of Sphere :%f\n", volume);
    return 0;
}
 