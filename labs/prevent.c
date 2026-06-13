#include <stdio.h>
#include <limits.h>

int main() {
	printf("---Using Unsigned Modifires---\n\n");
	unsigned int safe_number = UINT_MAX;
	printf("Absolute Max Unsigned int :  %u\n", safe_number);
	unsigned int check_overflow = safe_number + 1;
	printf("Max Unsigned Int + 1 :  %u\n", check_overflow);
	return 0;
}
