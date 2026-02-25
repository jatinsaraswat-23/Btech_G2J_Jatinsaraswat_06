#include <stdio.h>
int main()
{
    int Age;
    printf("Enter age: ");
    scanf("%d",&Age);
    if(Age>=18) {
        printf("Eligible to Vote");
    }
    else {
        printf("Not Eligible to Vote");
    }
    
    return 0;
}