// Write a program to print the following pattern:
// *****
//  ****
//   ***
//    **
//     *
#include <stdio.h>
#include <math.h>
int main(){
    int n;
    printf("Enter Number of rows: ");
    scanf("%d",&n);
    for (int i=0;i<n+1;i++){
        //spaces
        for(int s=0;s<i;s++){
            printf(" ");
        }
        //stars
        for(int j=1;j<=n-i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}