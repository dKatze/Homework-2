#include <stdio.h>
#include <locale.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
#include <time.h>

void matrixMultiplication(int x[2][2], int y[2][2]) {
	int x00, x01, x10, x11;
	x00 = x[0][0] * y[0][0] + x[0][1] * y[1][0];
	//printf("x00 = %d * %d + %d * %d\n", x[0][0], y[0][0], x[0][1], y[1][0]);
	x01 = x[0][0] * y[0][1] + x[0][1] * y[1][1];
	//printf("x01 = %d * %d + %d * %d\n", x[0][0] , y[0][0], x[0][1], y[1][1]);
	x10 = x[1][0] * y[0][0] + x[1][1] * y[1][0];
	//printf("x10 = %d * %d + %d * %d\n", x[1][0] , y[0][0] , x[1][1] , y[1][0]);
	x11 = x[1][0] * y[0][1] + x[1][1] * y[1][1];
	//printf("x11 = %d * %d + %d * %d\n", x[1][0] , y[0][1] , x[1][1] , y[1][1]);
	x[0][0] = x00;
	x[0][1] = x01;
	x[1][0] = x10;
	x[1][1] = x11;
	//printf("%d %d \n%d %d\n", x[0][0],  x[0][1],  x[1][0], x[1][1]);
	}

void matrixInPowerN(int x[2][2], int n) {
	int y[2][2] = { {0, 1}, {1, 1} };
	if ((n - 1) % 2 == 0) {
		for (int i = 2; i <= (n - 1) / 2; i++) {
			matrixMultiplication(x, y);
		}
		matrixMultiplication(x, x);
	}
	else {
		for (int i = 2; i <= n - 1; i++) {
			matrixMultiplication(x, y);
		}
	}
}



int main(void) {
	setlocale(LC_ALL, "Rus");

	int inputFibonacciNumber = 0;
	printf("Введите номер числа Фибоначи: ");
	scanf("%d", &inputFibonacciNumber);
	int mainMatrix[2][2] = { {0, 1}, {1, 1} };

	/*printf("Номер последовательности фибоначи:");
	int outputFibonacci = fibonacciFinding(inputFibonacciNumber);
	printf("Полученное число: %d", outputFibonacci);*/
	matrixInPowerN(mainMatrix, inputFibonacciNumber);
	//printf("%d %d \n%d %d", mainMatrix[0][0], mainMatrix[0][1], mainMatrix[1][0], mainMatrix[1][1]);

	printf("f(%d) = %d", inputFibonacciNumber, mainMatrix[1][1]);
	int t = clock();
	printf("\n%d", t);
	return 0;
}
