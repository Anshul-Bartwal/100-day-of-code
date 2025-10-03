#include <stdio.h>
int main(){
    int matrix[10][10], row, col, sum = 0;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &row, &col);
    printf("Enter elements of the matrix:\n");
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            scanf("%d", &matrix[i][j]);
        }
    }
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            sum += matrix[i][j];
        }
    }
    printf("The sum of all elements is: %d\n", sum);
    return 0;
}