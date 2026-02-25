#include <stdio.h>
int main()
{
    int Age;
    printf("Enter age of the Person: ");
    scanf("%d",&Age);
    if(Age>=0 && Age<=12) {
        printf("Person is Child\n");
    }
    else if(Age>=13 && Age<=17) {
        printf("Person is Teen\n");
    }
    else if(Age>=18 && Age<=60) {
        printf("Person is Adult\n");
    }
    else {
        printf("Person is Senior Citizen");
    }
    
    return 0;
}