#include <stdio.h>
const int n=4;
int searchInMatrix(int matrix[][n], int m, int n, int target) {
    int row = 0;
    int col = n - 1;

    while (row < m && col >= 0) {
        if (matrix[row][col] == target) {
            return 1;  // Found the target value
        }

        if (matrix[row][col] > target) {
            col--;  // Move left in the current row
        } else {
            row++;  // Move down to the next row
        }
    }

    return 0;  // Target value not found in the matrix
}

int main() {
    int matrix[][4] = {
        {1, 3, 5, 7},
        {9, 11, 13, 15},
        {17, 19, 21, 23},
        {25, 27, 29, 31}
    };
    int m = sizeof(matrix) / sizeof(matrix[0]);
    int n = sizeof(matrix[0]) / sizeof(matrix[0][0]);
    int target = 30;
    printf("%d\n",sizeof(matrix));
    printf("%d\n",sizeof(matrix[0]));
    printf("%d\n",sizeof(matrix[0][0]));
printf("%d%d\n",n,m);
    if (searchInMatrix(matrix, m, n, target)) {
        printf("Target value found in the matrix!\n");
    } else {
        printf("Target value not found in the matrix!\n");
    }

    return 0;
}

