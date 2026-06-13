#include <stdio.h>

int main() {
    int target = 1337;
    
    // Create a pointer variable (*) and point it to the address (&) of target
    int *ptr = &target;

    printf("Before Hack:\n");
    printf("Target Value: %d\n", target);
    printf("Target Address via pointer: %p\n\n", (void*)ptr);

    // THE HACK: Dereference the pointer (*) to modify the memory directly
    *ptr = 9999; 

    printf("After Hack:\n");
    printf("Target Value: %d (Changed directly in RAM!)\n", target);

    return 0;
}
