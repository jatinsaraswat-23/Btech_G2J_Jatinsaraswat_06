#include <stdio.h>
int main()
{
    int num1, num2, num3;
    printf("Enter 1st, 2nd and 3rd number: ");
    scanf("%d %d %d",&num1,&num2,&num3);
    if(num1>num2 && num1>num3) {
        printf("%d is Greatest",num1);
    }
    else if(num2>num1 && num2>num3) {
        printf("%d is Greatest",num2);
    }
    else {
        printf("%d is Greatest",num3);
    }
    
    return 0;
}