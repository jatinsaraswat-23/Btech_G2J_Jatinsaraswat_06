#include <stdio.h>
int main() 
{
    int rows, cols, target, count = 0;
    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);
    int matrix[rows][cols];
    printf("Enter matrix elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("Enter number to find frequency: ");
    scanf("%d", &target);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] == target) {
                count++;
            }
        }
    }
    printf("Frequency of %d is: %d\n", target, count);

    return 0;
}
