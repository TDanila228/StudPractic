#include "main.h"

void get_minor(float matrix[][MAX_SIZE], float temp[][MAX_SIZE], int p, int q, int n) 
{
    int i = 0, j = 0;

    for (int row = 0; row < n; row++) 
    {
        for (int col = 0; col < n; col++) 
        {
            if (row != p && col != q) 
            {
                temp[i][j++] = matrix[row][col];

                if (j == n - 1) 
                {
                    j = 0;
                    i++;
                }
            }
        }
    }
}