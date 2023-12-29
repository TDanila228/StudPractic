#include "main.h"

int inverse(float matrix[][MAX_SIZE], float inv[][MAX_SIZE], int n) 
{
    float det = determinant(matrix, n);
    if (det == 0) 
    {
        return 0;
    }

    float adj[MAX_SIZE][MAX_SIZE];
    transpose(matrix, adj, n);

    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            inv[i][j] = adj[i][j] / det;
        }
    }

    return 1;
}