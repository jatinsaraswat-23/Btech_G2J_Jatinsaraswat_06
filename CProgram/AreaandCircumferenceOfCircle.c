#include <stdio.h>
int main()
{
    float r,A,C;
    printf("Enter radius of the Circle: ");
    scanf("%f",&r);
    A = 3.14*r*r;
    C = 2*3.14*r;
    printf("Area = %f\n",A);
    printf("Circumference = %f",C);

    return 0;
}
