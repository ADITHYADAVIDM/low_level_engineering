#include <stdio.h>
#include <limits.h>
int main() {
	printf("---Forcing a Hardware Overflow---");
	int max_number = INT_MAX;
	printf("Absolute Max  Int : %d\n", max_number);
	int broken_number = max_number + 1;
	printf("Max Int + 1 : %d\n", broken_number);
	return 0;
}
