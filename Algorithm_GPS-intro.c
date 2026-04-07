#include <stdio.h>

int main() {
    int x = 10;
    int *p = &x;

    printf("Value of x: %d\n", x);
    printf("Address of x: %p\n", (void*)&x);
    printf("Value stored in pointer p: %p\n", (void*)p);
    printf("Value at address stored in p: %d\n", *p);

    *p = 20;
    printf("New value of x after pointer update: %d\n", x);

    return 0;
}
