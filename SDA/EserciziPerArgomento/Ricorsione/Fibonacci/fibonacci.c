/*
static int FibonacciRec(int n) {
	if (n == 0) {
		return 0;
	}

	if (n == 1) {
		return 1;
	}

	return FibonacciRec(n - 1) + FibonacciRec(n - 1);
}

int Fibonacci(int n) {
	
	if (n < 0) {
		return -1;
	}

	return FibonacciRec(n);

}*/
#include <stdlib.h>

static int FibonacciRec(int n, int* mem) {
	
	if (n == 0 || n == 1) {
		return n;
	}
	
	if (mem[n] == 0) {
		mem[n] = FibonacciRec(n-1, mem) + FibonacciRec(n - 2, mem);
	}

	return mem[n];
}

int Fibonacci(int n) {

	if (n < 0) {
		return -1;
	}

	int* mem = calloc(n + 1, sizeof(int));

	return FibonacciRec(n, mem);
}