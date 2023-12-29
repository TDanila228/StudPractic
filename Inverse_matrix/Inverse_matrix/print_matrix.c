#include "main.h"

void print_matrix(float matrix[][MAX_SIZE], int n) 
{
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            printf("%.2f ", matrix[i][j]);
        }
        printf("\n");
    }
}