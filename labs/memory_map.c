#include <stdio.h>
#include <stdlib.h>

// Global variable - Lives in the Data Segment
int global_var = 42;

void check_stack() {
    // Local variable - Lives on the Stack
    int stack_var = 100;
    printf("[STACK]  Local variable address:  %p\n", (void*)&stack_var);
}

int main() {
    printf("--- Visualizing the RAM Memory Map ---\n\n");

    // Print global address
    printf("[DATA]   Global variable address: %p\n", (void*)&global_var);

    // Call function to print stack address
    check_stack();

    // Dynamic allocation - Lives on the Heap
    int *heap_var = (int*)malloc(sizeof(int));
    if (heap_var == NULL) {
        return 1; 
    }
    
    printf("[HEAP]   Heap variable address:   %p\n", (void*)heap_var);

    // Clean up the heap
    free(heap_var);

    return 0;
}
