#include <stdio.h>

typedef enum{
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
} Days;
int main(){
    for (Days d = SUNDAY; d <= SATURDAY; d++) {
        printf("Day: %d = ", d);

        switch (d) {
            case SUNDAY:printf("SUNDAY\n"); break;
            case MONDAY:printf("MONDAY\n"); break;
            case TUESDAY:printf("TUESDAY\n"); break;
            case WEDNESDAY:printf("WEDNESDAY\n"); break;
            case THURSDAY:printf("THURSDAY\n"); break;
            case FRIDAY:printf("FRIDAY\n"); break;
            case SATURDAY:printf("SATURDAY\n"); break;
        }
    }
    return 0;

}