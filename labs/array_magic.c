#include <stdio.h>

int main() {
    int arr[3] = {10, 20, 30};
    int *ptr = arr;

    printf("--- Standard Bracket Notation ---\n");
    printf("arr[0]: Value = %d, Address = %p\n", arr[0], (void*)&arr[0]);
    printf("arr[1]: Value = %d, Address = %p\n", arr[1], (void*)&arr[1]);
    printf("arr[2]: Value = %d, Address = %p\n", arr[2], (void*)&arr[2]);

    printf("\n --- Pointer Math ---\n");
    printf("*(ptr + 0): Value = %d, Target Address = %p\n", *(ptr + 0), (void*)(ptr + 0));
    printf("*(ptr + 1): Value = %d, Target Address = %p\n", *(ptr + 1), (void*)(ptr + 1));
    printf("*(ptr + 2): Value = %d, Target Address = %p\n", *(ptr + 2), (void*)(ptr + 2));

    return 0;
}
