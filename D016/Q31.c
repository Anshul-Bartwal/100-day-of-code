//Write a program to take a number as input and print its equivalent binary representation.
#include <stdio.h>
#include <math.h>
int main(){
    int n;
    int bit = 0;
    int i = 1;  
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    while (1){
        if (n==0){
            break;
        }
        bit += (n%2)*(pow(10, i-1));
        n/=2;
        i++;
    }

    printf("Binary representation is: %d\n", bit);
    return 0;
}