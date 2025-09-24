// Write a program to print the following pattern:

//    *
//   ***
//  *****
// *******
//  *****
//   ***
//    *

#include <stdio.h>
int main(){
    int n;
    printf("Enter max width: ");
    scanf("%d",&n);
    for (int i=0;i<=n/2+1;i+=2){
        for (int s=0;s<(n-i)/2;s++){
            printf(" ");
        }
        for (int j=0;j<=i;j++){
            printf("*");
        }
        printf("\n");

    }
    for (int i=n-2;i>0;i-=2){
        for (int s=0;s<(n-i)/2;s++){
            printf(" ");
        }
        for (int j=0;j<i;j++){
            printf("*");

        }
        printf("\n");
    }
    return 0;
    
    
        

    
}
