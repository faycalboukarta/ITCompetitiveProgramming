#include <stdio.h>

#define M 4
#define N 5

int main() {
    // Integer array containing M x N elements
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};

    // Construct M x N matrix from arr in spiral order
    int matrix[M][N];
    int row = 0, col = 0, k = 0;
    while (k < M * N) {
        // Move right
        while (col < N && matrix[row][col] == 0) matrix[row][col++] = arr[k++];
        col--; row++;
        // Move down
        while (row < M && matrix[row][col] == 0) matrix[row++][col] = arr[k++];
        row--; col--;
        // Move left
        while (col >= 0 && matrix[row][col] == 0) matrix[row][col--] = arr[k++];
        col++; row--;
        // Move up
        while (row >= 0 && matrix[row][col] == 0) matrix[row--][col] = arr[k++];
        row++; col++;
    }

    // Print the matrix
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
