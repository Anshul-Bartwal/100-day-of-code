#include <stdio.h>

typedef enum {
    A = 10,
    B,
    C
} Letters;

int main() {

    printf("A=%d\n", A);
    printf("B=%d\n", B);
    printf("C=%d\n", C);

    return 0;
}
