#include <stdio.h>
int main()
{
    float m1, m2, m3, m4, m5, sum, percent;
    printf("Enter marks of 5 Subject: ");
    scanf("%f %f %f %f %f",&m1,&m2,&m3,&m4,&m5);
    sum = m1 + m2 + m3 + m4 + m5;
    percent = sum / 5;
    printf("Total Marks = %f\n", sum);
    printf("Percentage = %f", percent);

    return 0;
}
