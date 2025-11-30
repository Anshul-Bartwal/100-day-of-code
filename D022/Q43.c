//Write a program to check if a number is a strong number.
#include <stdio.h>

int main()
{
    int n, num, digit, fact, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    num = n;
    while (num != 0)
    {
        digit = num % 10;
        fact = 1;
        for (int i = 1; i <= digit; i++)
        {
            fact *= i;
        }
        sum += fact;
        num /= 10;
    }
    if (sum == n)
    {
        printf("%d is a strong number.\n", n);
    }
    else
    {
        printf("%d is not a strong number.\n", n);
    }
    return 0;
}