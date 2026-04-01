#include <stdio.h>
int main() 
{
    int size, i, j, sum = 0;
    printf("Enter the size of the square matrix: ");
    scanf("%d", &size);
    int matrix[size][size];
    printf("Enter the elements of the matrix:\\n");
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            printf("Element - [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("\\nThe entered matrix is:\\n");
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            printf("%d\\t", matrix[i][j]);
        }
        printf("\\n");
    }
    for (i = 0; i < size; i++) {
        sum += matrix[i][i];
    }
    printf("\\nSum of the main diagonal elements is: %d\\n", sum);

    return 0;
}
