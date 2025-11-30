//Write a program to calculate library fine based on late days as follows:
// First 5 days late: ₹2/day
// Next 5 days late: ₹4/day
// Next 20 days days late: ₹6/day
// More than 30 days: Membership Cancelled.
// Input 1:
// 4
// Output 1:
// Fine ₹8
#include <stdio.h>
int main() {
    int days_late;
    printf("Enter number of days late: ");
    scanf("%d", &days_late);

    if (days_late <= 0) {
        printf("No fine\n");
    } else if (days_late <= 5) {
        printf("Fine : %d\n", days_late * 2);
    } else if (days_late <= 10) {
        printf("Fine : %d\n", (5 * 2) + ((days_late - 5) * 4));

    } else if (days_late <= 30) {
        printf("Fine : %d\n", (5 * 2) + (5 * 4) + ((days_late - 10) * 6));
    } else {
        printf("Membership Cancelled\n");
    }

    return 0;
}