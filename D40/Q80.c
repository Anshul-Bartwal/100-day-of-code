// /Multiply two matrices.
#include <stdio.h>
int main(){
    int r1,c1;
    int r2,c2;
    printf("Enter number of rows and columns: of M1 ");
    scanf("%d %d",&r1,&c1);
    printf("Enter number of rows and columns: of M2 ");
    scanf("%d %d",&r2,&c2);

    if (c1!=r2){
        printf("Cant Multipy");
        return 0;
    }
    int m1[r1][c1];
    int m2[r2][c2];
    int mulMat[r1][c2];

    printf("Enter elements of matrix 1: \n");
    for(int row=0;row<r1;row++){
        for(int col=0;col<c1;col++){
            scanf("%d", &m1[row][col]);
            // printf("hi");
        }
    }

    printf("Enter elements of matrix 2: \n");
    for(int row=0;row<r2;row++){
        for(int col=0;col<c2;col++){
            scanf("%d", &m2[row][col]);
        }
    }
    
    for(int i=0;i<r1;i++){
        int sum=0;
        for(int j=0;j<c1;j++){
            sum+=m1[i][j]*m2[j][i];
            printf(" %d ",sum);
            
        }
    }

  
    
    return 0;
}
//in progress