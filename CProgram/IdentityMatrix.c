#include <stdio.h>
int main() 
{
    int m, n, isIdentity = 1;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &m, &n);
    if (m != n) {
        printf("The matrix is not square, so it cannot be an identity matrix.\n");
        return 0;
    }
    int matrix[m][n];
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) {
                if (matrix[i][j] != 1) {
                    isIdentity = 0;
                    break;
                }
            } else {
                if (matrix[i][j] != 0) {
                    isIdentity = 0;
                    break;
                }
            }
        }
        if (!isIdentity) break;
    }
    if (isIdentity)
        printf("The matrix is an Identity Matrix.\n");
    else
        printf("The matrix is NOT an Identity Matrix.\n");

    return 0;
}