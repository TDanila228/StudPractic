#include "main.h"

float determinant(float matrix[][MAX_SIZE], int n) 
{
    float det = 0;
    if (n == 1) 
    {
        return matrix[0][0];
    }

    float temp[MAX_SIZE][MAX_SIZE];
    int sign = 1;

    for (int f = 0; f < n; f++) 
    {
        float minor[MAX_SIZE][MAX_SIZE];
        get_minor(matrix, minor, 0, f, n);
        det += sign * matrix[0][f] * determinant(minor, n - 1);
        sign = -sign;
    }

    return det;
}