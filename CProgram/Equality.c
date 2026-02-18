#include <stdio.h>
int main()
{
    int num1,num2;
    printf("Enter First and Second numbers: ");
    scanf("%d %d",&num1,&num2);
    if (num1 == num2) {
        printf("Both numbers are equal\n");
    } else {
        printf("Numbers are not equal\n");
    }
    return 0;
}