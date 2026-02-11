#include <stdio.h>
#include <math.h>
int main()
{
    float P,R,T,SI,Amount,CI;
    printf("Enter Principal, Rate and Time: ");
    scanf("%f %f %f",&P,&R,&T);
    SI = (P*R*T)/100;
    Amount = P*pow((1+R/100),T);
    CI = Amount-P;
    printf("Simple Interest = %f\n",SI);
    printf("Compound Interest = %f",CI);


    return 0;



}
