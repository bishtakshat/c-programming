#include <stdio.h>

int main(){
    int matrix[2][3];

    printf("Enter the elements of the matrix:\n");

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Matrix[%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nYour Matrix is:\n");

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", matrix[i][j]);
        }

        printf("\n");
    }

    return 0;
}