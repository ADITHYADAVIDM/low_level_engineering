#include <stdio.h>

int main() {
    int x = 42;
    int *p = &x;

    printf("1. Value of x: %d\n", x);
    printf("2. Hex Address of x (&x): %p\n", (void*)&x);
    printf("3. Value stored inside p: %p\n", (void*)p);
    printf("4. Size of variable x: %lu bytes\n", sizeof(x));
    printf("5. Size of pointer p: %lu bytes\n", sizeof(p));

    return 0;
}
