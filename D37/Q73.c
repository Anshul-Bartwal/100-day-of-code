//Find the sum of each row of a matrix and store it in an array.
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

    for(int i=0;i<row;i++){
        int sum=0;
        for(int j=0;j<col;j++){
            sum+=matrix[i][j];
        }
        arr[i]=sum;
    
    }
    printf("The sum of each row is:\n");
    for(int i=0;i<row;i++){
        printf("%d ",arr[i]);
    }
    return 0;

}