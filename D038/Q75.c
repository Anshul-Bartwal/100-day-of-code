//Add two matrices.
#include <stdio.h>
int main(){
    int rows,cols;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d",&rows,&cols);
    int mat1[rows][cols] ,mat2[rows][cols];
    int addedMat[rows][cols];

    printf("Enter elements of array 1: ");
    for (int i=0;i<rows;i++){
        for (int j=0;j<cols;j++){
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("Enter elements of array 2: ");
    for (int i=0;i<rows;i++){
        for (int j=0;j<cols;j++){
            scanf("%d", &mat2[i][j]);
        }
    }

    for (int row=0;row<rows;row++){
        
        for (int col=0;col<cols;col++){
            addedMat[row][col] = mat1[row][col] + mat2[row][col];
        }
    }

    //printing added matrix

    for (int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            printf("%d ",addedMat[i][j]);

        }
        printf("\n");
    }


    return 0;
}