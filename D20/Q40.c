//write a program to find the 1’s complement of a binary number and print it.
#include <stdio.h>
int main() {
    int num ;
    int comp = 0;
    int ten = 1;
    
    scanf("%d",&num);
    

    while (num != 0) {
        int digit = num % 10;
        // Flip the bit: 0 becomes 1, 1 becomes 0
        if (digit == 0)
            digit = 1;
        else
            digit = 0;
        comp += digit * ten;
        ten *= 10;
        num /= 10;
    }

    printf("1's complement: %d\n", comp);
    return 0;
}