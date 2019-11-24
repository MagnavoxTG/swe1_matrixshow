#include <stdio.h>
#include <stdlib.h>

#define matrixrows 3
#define matrixcolumns 3

void show_matrix(int mat[matrixrows][matrixcolumns]);

int main() {
    int matrix1[matrixrows][matrixcolumns];

    for (int x = 0; x < matrixrows; x++) {
        for (int y = 0; y < matrixcolumns; y++) {
            matrix1[x][y] = rand() % 100;
        }
    }

    show_matrix(matrix1);

    return 0;
}

void show_matrix(int (*mat)[3]) {

    for (int x = 0; x < matrixrows; x++) {
        printf("( ");
        for (int y = 0; y < matrixcolumns; y++) {
            printf("%i ",mat[x][y]);
        }
        printf(")\n");
    }
}
