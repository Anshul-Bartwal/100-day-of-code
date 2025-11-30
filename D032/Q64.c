// Find the digit that occurs the most times in an integer number.
#include <stdio.h>
int main(){
    int num, digit, count[10] = {0}, maxCount = 0, mostFrequentDigit; //count [10] to store count of digits 0-9

    printf("Enter an integer number: ");
    scanf("%d", &num);


    //Count the occurrences of each digit
    while (num > 0) {
        digit = num % 10;
        count[digit]++;
        num /= 10;
    }

    // Find the digit with the maximum count
    for (int i = 0; i < 10; i++) {
        if (count[i] > maxCount) {
            maxCount = count[i];
            mostFrequentDigit = i;
        }
    }

    printf("The digit that occurs the most is: %d (occurs %d times)\n", mostFrequentDigit, maxCount);

    return 0;
}