// Perform diagonal traversal of a matrix.
#include <stdio.h>
int main(){
    int rows,cols;
    printf("Enter number of rows and columns: ");
    scanf("%d %d",&rows,&cols);
    int mat[rows][cols];
    for(int row=0;row<rows;row++){
        for(int col=0;col<cols;col++){
            scanf("%d", mat[row][col]);
        }
    }

    


}

