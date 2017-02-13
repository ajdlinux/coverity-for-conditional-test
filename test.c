#include <stdio.h>

const int n = 64;

/* This function is used similarly to cpumask_next() etc in the kernel */
int next_int(int x) {
	return x + 1;
}

int main() {
	int x;
	int array[n];

	for (x = 0; x = next_int(x), x < n; ) {
		printf("array[x = %d] = 42\n", x);
		array[x] = 42;
	}
	printf("End of loop, x = %d\n", x);
}
