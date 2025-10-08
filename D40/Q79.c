#include <stdio.h>
int main(){

    int i, j;
    
    printf("Enter Matrix type (i j): \n");
    scanf("%d %d", &i, &j);
    int mat[i][j];
    printf("Enter matrix elements: \n");
    for (int a = 0; a < i; a++) {
        for (int b = 0; b < j; b++) {
            scanf("%d", &mat[a][b]);
        }
    }

    int totalDiagonals = i + j - 1;

    for (int d = 0; d < totalDiagonals; d++) {
        int temp[i + j], k = 0;

        for (int a = 0; a < i; a++) {
            for (int b = 0; b < j; b++) {
                if (a + b == d) { // condition in diagonals their sum of column and row is equal
                    temp[k++] = mat[a][b];
                }
            }
        }

        if (d % 2 == 0) { // even diagonals go right up 
            for (int x = k - 1; x >= 0; x--) {
                printf("%d ", temp[x]);
            }
        } else {
            for (int x = 0; x < k; x++) {
                printf("%d ", temp[x]);
            }
        }
    }

    return 0;
}