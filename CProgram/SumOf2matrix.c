#include <stdio.h>
int main() 
{
    int r, c, i, j;
    int a[10][10], b[10][10], sum[10][10];
    printf("Enter rows and cols: ");
    scanf("%d %d", &r, &c);
    for(i=0; i<r; ++i)
        for(j=0; j<c; ++j) {
            printf("Enter element a%d%d and b%d%d: ",i+1,j+1,i+1,j+1);
            scanf("%d %d", &a[i][j], &b[i][j]);
        }
    printf("\nSum of matrices:\n");
    for(i=0; i<r; ++i) {
        for(j=0; j<c; ++j) {
            printf("%d ", a[i][j] + b[i][j]);
        }
        printf("\n");
    }
    return 0;
}
