#include <stdio.h>

int main() {
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    
    for (int i = 0; i < 3; i++) {
        if (i % 2 == 0) { // Even rows
            for (int j = 0; j < 3; j++) {
                printf("%d ", matrix[i][j]);
            }
        } else { // Odd rows
            for (int j = 2; j >= 0; j--) {
                printf("%d ", matrix[i][j]);
            }
        }
        printf("\n");
    }

    return 0;
}

