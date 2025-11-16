#include <stdio.h>

int main()
{
    int len;

    printf("Enter the length of array: \n");
    scanf("%d", &len);
    int nums[len];
    for (int i = 0; i < len; i++)
    {
        do
        {
            printf("Enter element %d: \n", i + 1);
            scanf("%d", &nums[i]);
            if (nums[i] < 0)
            {
                printf("Invalid Input. Enter Positive Integers only!\n");
            }
        } while (nums[i] < 0);
    }

    int target;
    printf("Enter target: \n");
    scanf("%d", &target);

    int out_i = -1, out_j = -1;
    for (int i = 0; i < len; i++)
    {
        for (int j = i + 1; j < len; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                out_i = i;
                out_j = j;
                break;
            }
        }
        if (out_i != -1)
        {
            break;
        }
    }

    printf("%d  %d", out_i, out_j);
    return 0;
}