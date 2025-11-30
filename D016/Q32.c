//Write a program to check if a number is a palindrome.
#include <stdio.h>
int main(){
    int n;
    int rev = 0;
    int temp;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    temp = n;
    while (temp > 0) {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }
    if (n == rev) {
        printf("%d is a palindrome.\n", n);
    } else {
        printf("%d is not a palindrome.\n", n);
    }
    return 0;
}
