#include <stdio.h>
#include <locale.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
#include <time.h>

int fibonacci(int n, int* error_code) {
	if (n < 0) {
		*error_code = 1;
		return 2;
	} 
	if (n == 0) {
		return 0;
	}
	else if (n == 1) {
		return 1;
	}
	else {
		return fibonacci(n - 1, error_code) + fibonacci(n - 2, error_code);
	}
}

int main(void) {
	setlocale(LC_ALL, "Rus");

	int inputFibonacciNumber;
	int error_code = 0;
	
	printf("Введите число Фибоначчи: ");
	scanf("%d", &inputFibonacciNumber);

	int result = fibonacci(inputFibonacciNumber, &error_code);
	printf("%d", result);
	int t = clock();
	printf("\n%d", t);
	return 0;
}
