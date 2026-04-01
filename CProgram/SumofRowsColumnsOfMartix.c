#include <stdio.h>
int main() 
{
    int matrix[10][10]; 
    int i, j, rows, columns, sum_row, sum_column;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &columns);
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < rows; ++i) {
        for (j = 0; j < columns; ++j) {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("\nSum of each row:\n");
    for (i = 0; i < rows; ++i) {
        sum_row = 0;
        for (j = 0; j < columns; ++j) {
            sum_row += matrix[i][j];
        }
        printf("Sum of Row %d = %d\n", i + 1, sum_row);
    }
    printf("\nSum of each column:\n");
    for (j = 0; j < columns; ++j) {
        sum_column = 0;
        for (i = 0; i < rows; ++i) {
            sum_column += matrix[i][j];
        }
        printf("Sum of Column %d = %d\n", j + 1, sum_column);
    }

    return 0;
}