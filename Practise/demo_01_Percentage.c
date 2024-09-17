#include <stdio.h>
int main(int argc, char const *argv[])
{
    int marksOfEnglish = 90;
    int marksOfMaths = 95, marksOfScience = 89, marksOfHistory = 88, marksOfGeograpghy = 99;
    float percetage = 0.0;
    percetage = (marksOfEnglish + marksOfGeograpghy + marksOfHistory + marksOfMaths + marksOfScience) / 5;
    printf("Percentage :%f", percetage);

    return 0;
}
