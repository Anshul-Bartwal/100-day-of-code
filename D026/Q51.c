// Write a program to print the following pattern:
//     5
//    45
//   345
//  2345
// 12345
#include <stdio.h>
int main(){
    int n;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    for (int i=n;i>0;i--){
        for (int s=1;s<i;s++){
            printf(" ");
        }
        for(int j=i;j<=n;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
    
}

