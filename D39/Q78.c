// Find the sum of main diagonal elements for a square matrix.
#include <stdio.h>
int main(){
    int rows;
    printf("Enter the number of rows(= columns) :");
    scanf("%d",&rows);
    int mat1[rows][rows];
    int sum=0;
    

    printf("Enter elements of array 1: \n");
    for (int i=0;i<rows;i++){
        for (int j=0;j<rows;j++){
            scanf("%d", &mat1[i][j]);
            if (i==j){
                sum+=mat1[i][j];
            }
        }
    }
    printf("%d",sum);

    return 0;


    //


}