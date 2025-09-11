//Write a program to reverse a given number.
#include <stdio.h>
int main(){
    int n, reversed = 0;
    printf("Enter n: ");
    scanf("%d", &n);
    while(n != 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    printf("Reversed number is: %d\n", reversed);
    return 0;
}