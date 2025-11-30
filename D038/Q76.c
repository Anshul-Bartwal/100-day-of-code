//Check if a matrix is symmetric.
#include <stdio.h>
int main(){
    int rows,cols;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d",&rows,&cols);
    int mat1[rows][cols];
    

    printf("Enter elements of array 1: \n");
    for (int i=0;i<rows;i++){
        for (int j=0;j<cols;j++){
            scanf("%d", &mat1[i][j]);
        }
    }

    

    for (int row=0;row<rows;row++){
        
        for (int col=0;col<cols;col++){
            if(mat1[row][col] != mat1[col][row]){
                printf("Not symmetric");
                return 0;
            }


        }
        
    }
    printf("Symmetric");

    return 0;
}