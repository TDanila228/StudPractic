#include <stdio.h>
#include "main.h"

int main() 
{
    int n;
    printf("Enter matrix dimension: ");
    scanf_s("%d", &n);

    if (n > MAX_SIZE || n <= 0) 
    {
        printf("Invalid matrix dimension\n");
        return 1;
    }

    float matrix[MAX_SIZE][MAX_SIZE];
    float inv[MAX_SIZE][MAX_SIZE];
    float vectorB[MAX_SIZE];
    float result[MAX_SIZE];

    printf("Enter matrix elements:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) 
        {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf_s("%f", &matrix[i][j]);
        }
    }

    printf("Enter elements of the rightside vector:\n");
    for (int i = 0; i < n; i++) 
    {
        printf("Element [%d]: ", i + 1);
        scanf_s("%f", &vectorB[i]);
    }

    if (inverse(matrix, inv, n)) 
    {
        printf("Inverse matrix:\n");
        print_matrix(inv, n);
        solve_kramer(matrix, vectorB, result, n);
    }
    else 
    {
        printf("Inverse matrix does not exist. det=0\n");
    }

    return 0;
}