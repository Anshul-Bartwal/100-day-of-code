#include <stdio.h>

int main()
{
    int len;

    printf("Enter the length of array: \n");
    scanf("%d", &len);
    int nums[len];
    int expectedSum = (len * (len + 1)) / 2;
    int actualSum = 0;
    for (int i = 0; i < len; i++){
        printf("Enter element %d: \n", i + 1);
        scanf("%d", &nums[i]);
        actualSum += nums[i];
    }
    printf("Missing: %d", expectedSum -actualSum);
    return 0;
}