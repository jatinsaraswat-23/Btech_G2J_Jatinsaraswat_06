#include <stdio.h>
int main()
{
    float C,F;
    printf("Enter Celcius temp.: ");
    scanf("%f",&C);
    F = (C*9/5)+32;
    printf("Temp. in Fahrenheit = %f",F);

    return 0;


}
