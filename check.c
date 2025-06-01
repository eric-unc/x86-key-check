#include <cpuid.h>
#include <stdbool.h>
#include <stdio.h>

int main() {
	unsigned int eax, ebx, ecx, edx;
	__cpuid_count(7, 0, eax, ebx, ecx, edx);
	bool mpk_support = ecx & (1 << 3);
	bool pks_support = ecx & (1U << 31);

	printf("MPK support: %s\n", mpk_support ? "Yes" : "No");
	printf("PKS support: %s\n", pks_support ? "Yes" : "No");
	
	return 0;
}

