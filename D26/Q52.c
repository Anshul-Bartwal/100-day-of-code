// Write a program to print the following pattern:

// *

// *
// *
// *

// *
// *
// *
// *
// *

// *
// *
// *

// *

#include <stdio.h>
int main(){
    int n;
    printf("Enter max length: ");
    scanf("%d",&n);
    //upper half
    for (int i=1;i<=n;i+=2){
        for(int j=0;j<i;j++){
            printf("*\n");
        }
        printf("\n");


    }
    for(int i=n-2;i>0;i-=2){
        for(int j=0;j<i;j++){
            printf("*\n");
        }
        printf("\n");
        
    }
    return 0;

    
}
