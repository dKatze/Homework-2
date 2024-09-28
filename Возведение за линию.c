#define _CRT_SECURE_NO_WARNINGS 
#pragma warning(disable:6031)
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int figureInPower(int a, int b) {
	int result = a;
	for (int i = 2; i <= abs(b); i++) {
		result = result * a;
	}
	return result;
}

void output(int a, int b, int result) {
	if (a < 0 && b < 0) printf("(%d)^(%d) = 1/%d", a, b, result);
	else if (a < 0 && b < 0) printf("(%d)^(%d) = %d", a, b, result);
	else if (a < 0 && b > 0) printf("(%d)^%d = %d", a, b, result);
	else if (a > 0 && b < 0) printf("%d^(%d) = 1/%d", a, b, result);
	else printf("%d^%d = %d", a, b, result);
}
int main(void){
	setlocale(LC_ALL, "Russian");

	int figure;
	int power;
	int result; 


	printf("Введите число, возводимое в степень: ");
	scanf("%d", &figure);
	printf("Введите степень: ");
	scanf("%d", &power);


	if (power == 0) {
		printf("%d^%d = 1", figure, power);
		return 0;
	}
	else if (power == 1) {
		printf("%d^%d = %d", figure, power, figure);
		return 0;
	}
	else if (figure == 0 & power < 0) {
		printf("%d^%d = inf", figure, power);
	}
	else {
		result = figureInPower(figure, power);
	}


	output(figure, power, result);
	return 0;
}

