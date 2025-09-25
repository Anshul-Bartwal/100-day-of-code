//Write a program to print all the prime numbers from 1 to n.

#include <stdio.h>
int main(){
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    printf("2 ");
    for (int i=3;i<=n;i+=2){
        int flag=1;
        for(int j=3;j<i/2;j+=2){
            if(i%j == 0){
                flag=0;
                break;
            }
        }
        

        if (flag == 1){
            printf("%d ",i);
        }
    }
    return 0;
}