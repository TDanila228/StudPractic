#include "main.h"

void transpose(float matrix[][MAX_SIZE], float adj[][MAX_SIZE], int n) 
{
    if (n == 1) 
    {
        adj[0][0] = 1;
        return;
    }

    int sign;
    float temp[MAX_SIZE][MAX_SIZE];

    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            float minor[MAX_SIZE][MAX_SIZE];
            get_minor(matrix, minor, i, j, n);
            sign = ((i + j) % 2 == 0) ? 1 : -1;
            adj[j][i] = sign * determinant(minor, n - 1);
        }
    }
}