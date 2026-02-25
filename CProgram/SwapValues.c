#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter value of a and b: ");
    scanf("%d %d",&a,&b);
    a = a+b;
    b = a-b;
    a = a-b;
    printf("New value of a is %d\n",a);
    printf("New value of b is %d",b);

    return 0;
}
