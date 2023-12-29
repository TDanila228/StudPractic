#include "main.h"

void solve_kramer(float matrix[][MAX_SIZE], float vector[], float result[], int n) 
{
    float det = determinant(matrix, n);
    if (det == 0) 
    {
        printf("The system has either no solution or infinite solutions (det=0)\n");
        return;
    }

    float temp[MAX_SIZE][MAX_SIZE];

    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            temp[j][i] = matrix[j][i];
        }
    }

    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            temp[j][i] = vector[j];
        }

        result[i] = determinant(temp, n) / det;

        for (int j = 0; j < n; j++) 
        {
            temp[j][i] = matrix[j][i];
        }
    }

    printf("Solution using Cramer's method:\n");
    for (int i = 0; i < n; i++) 
    {
        printf("x[%d] = %.2f\n", i + 1, result[i]);
    }
}