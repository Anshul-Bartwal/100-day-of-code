//Find the transpose of a matrix.
#include <stdio.h> 
int main(){
    int row, col;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &row, &col);
    printf("Enter elements of the matrix:\n");
    int matrix[row][col], arr[row];
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            scanf("%d", &matrix[i][j]);
        }
    }
    int transpose[col][row];
    for (int i = 0;i<row;i++){
        for (int j=0; j< col; j++){
            transpose[j][i]=matrix[i][j];

        }

    }
    printf("The transpose of the matrix is:\n");
    for (int i = 0;i<col;i++){
        for (int j=0; j< row; j++){
            printf("%d ",transpose[i][j]);

        }
        printf("\n");

    }
    
    return 0;

}