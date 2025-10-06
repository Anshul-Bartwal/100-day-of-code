// Check if the elements on the diagonal of a matrix are distinct.
#include <stdio.h>
int main(){
    int rows;
    printf("Enter the number of rows(= columns) :");
    scanf("%d",&rows);
    int mat1[rows][rows];
    

    printf("Enter elements of array 1: \n");
    for (int i=0;i<rows;i++){
        for (int j=0;j<rows;j++){
            scanf("%d", &mat1[i][j]);
        }
    }

    int diagonalArr[rows];
    for (int i=0;i<rows;i++){
        
        diagonalArr[i] = mat1[i][i];


    }
    //checking if diagonal is distinct or not
    for (int i=0;i<rows;i++){
        for(int j=i+1;j<rows;j++){
            if (diagonalArr[i] == diagonalArr[j]){
                printf("Diagonals are not distinct");
                return 0;
            }
        }

    }
    printf("Diagonals are distinct");
    return 0;


    //


}