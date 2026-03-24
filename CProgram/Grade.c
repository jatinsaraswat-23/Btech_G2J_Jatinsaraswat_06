#include <stdio.h>
int main()
{
    float m1, m2, m3, m4, m5, percent;
    printf("Enter marks of 5 Subjects: ");
    scanf("%f %f %f %f %f",&m1,&m2,&m3,&m4,&m5);
    percent = (m1+m2+m3+m4+m5)/5;
    printf("Percentage is %f\n",percent);
    if(percent>90) {
        printf("Grade = A");
    }
    else if(percent>80 && percent<=90) {
        printf("Grade = B");
    }
    else if(percent>60 && percent<=80) {
        printf("Grade = C");
    }
    else {
        printf("Grade = D");
    }

    return 0;
}