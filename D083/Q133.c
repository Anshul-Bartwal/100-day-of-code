#include <stdio.h>

typedef enum
{
    JANUARY,
    FEBRUARY,
    MARCH,
    APRIL,
    MAY,
    JUNE,
    JULY,
    AUGUST,
    SEPTEMBER,
    OCTOBER,
    NOVEMBER,
    DECEMBER
} Month;

int main()
{

    for (Month m = JANUARY; m <= DECEMBER; m++)
    {
        printf("Month %d = ", m);
        switch (m)
        {
        case JANUARY:
            printf("31 days\n");
            break;
        case FEBRUARY:
            printf("28 days (29 in leap year :))\n");
            break;
        case MARCH:
            printf("31 days\n");
            break;
        case APRIL:
            printf("30 days\n");
            break;
        case MAY:
            printf("31 days\n");
            break;
        case JUNE:
            printf("30 days\n");
            break;
        case JULY:
            printf("31 days\n");
            break;
        case AUGUST:
            printf("31 days\n");
            break;
        case SEPTEMBER:
            printf("30 days\n");
            break;
        case OCTOBER:
            printf("31 days\n");
            break;
        case NOVEMBER:
            printf("30 days\n");
            break;
        case DECEMBER:
            printf("31 days\n");
            break;
        }
    }

    return 0;
}
