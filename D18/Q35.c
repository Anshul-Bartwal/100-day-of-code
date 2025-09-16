//Write a program to print all factors of a given number.
#include <stdio.h>
int main(){
    int n;
    int i=2;
    printf("Enter Number: ");
    scanf("%d",&n);
    while (n!=0 && i<=n){
        if (n%i==0){
            printf("%d  ",i);
            n/=i;       
        }else{
            i++;
        }
    }
    return 0;
}