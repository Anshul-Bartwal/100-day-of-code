#include <stdio.h>
enum Menu
{
    ADD = 1,
    SUBTRACT,
    MULTIPLY
};
int main()
{
    int choice;
    float a, b, result;

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    printf("Choose an operation:\n");
    printf("1. Add\n2. Subtract\n3. Multiply\n");
    scanf("%d", &choice);

    switch (choice)
    {
    case ADD:
        result = a + b;
        printf("Result: %.2f\n", result);
        break;
    case SUBTRACT:
        result = a - b;
        printf("Result: %.2f\n", result);
        break;
    case MULTIPLY:
        result = a * b;
        printf("Result: %.2f\n", result);
        break;
    default:
        printf("Invalid choice!\n");
    }
    return 0;
}
