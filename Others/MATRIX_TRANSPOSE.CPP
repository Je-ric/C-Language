#include <stdio.h>

int main() {
    int rows, columns, c, d, matrix[10][10], transpose[10][10];
    int (*ptr_matrix)[10] = matrix;     
    int (*ptr_transpose)[10] = transpose;
  
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d%d", &rows, &columns);
  
    printf("Enter the elements of the matrix:\n");
    for (c = 0; c < rows; c++) {
        for (d = 0; d < columns; d++) {
            scanf("%d", (*(ptr_matrix + c) + d));
        }
    }

    for (c = 0; c < rows; c++) {
        for (d = 0; d < columns; d++) {
            *(*(ptr_transpose + d) + c) = *(*(ptr_matrix + c) + d);
        }
    }
  
    printf("Transpose of the entered matrix:\n");
    for (c = 0; c < columns; c++) {
        for (d = 0; d < rows; d++) {
            printf("%d\t", *(*(ptr_transpose + c) + d));
        }
        printf("\n");
    }
  
    return 0;
}
