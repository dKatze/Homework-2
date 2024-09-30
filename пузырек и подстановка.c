#define _CRT_SECURE_NO_WARNINGS
#pragma warning(suppress : 4996)
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <time.h>

createRandomMassiv(int array[100000]) {
	for (int i = 0; i < 100000; i++) {
		array[i] = rand() % 100;
		printf("%d ",i);
		printf("\n");
	}
}

void Swap(int *a, int *b) {
	*a ^= *b;
	*b ^= *a;
	*a ^= *b;
}
int Puzyreck(int n, int array[1000000]) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (array[j] > array[j + 1]) {
				Swap(&array[j], &array[j + 1]);
			}
		}
	}
	printf("HOOHOHOHOHOHOHOOH");
}

void Podschet(int n, int array[1000000]) {
	int k;
	for (int i = 0; i < n; i++)
	{
		k = 0;
		for (int j = 0; j < n; j++)
		{
			if (array[i] > array[j])
				k++;
		}
		if (array[k] != array[i]) {
			Swap(&array[k], &array[i]); 
		}
		printf("HOOHOHOHOHOHOHOOH");
		
	}
}

int Check(int n, int array[10000000]) {
	for (int i = 0; i < n - 1; i++) {
		if (array[i] > array[i + 1]) {
			return 0;
		}
	}
	return 1;
}
int Test() {
	int testMassiv1[10] = {0, 12, 0, 3, 42, 4,-4, -43, -4, 99};
	int testMassiv2[2] = {0, 12};
	int testMassiv3[4] = {-4, -43, -4, 99};

	Puzyreck(10, testMassiv1);
	Puzyreck(2, testMassiv2);
	Puzyreck(4, testMassiv3);

	if (Check(testMassiv1, 10) == 1) {
		printf("1st Check : Succees\n");
	}
	else {
		printf("1st Check : Error\n");
	}
	if (Check(testMassiv2, 2) == 1) {
		printf("2nd Check : Succees\n");
	}
	else {
		printf("2nd Check : Error\n");
	}
	if (Check(testMassiv3, 4) == 1) {
		printf("3rd Check : Succees\n");
	}
	else {
		printf("3rd Check : Error\n");
	}
}

int main(void) {
	int n = 10000;
	int array[100000];
	/*
	scanf("%d", &n);
	
	int* array = malloc(n * sizeof(int));
	for (int i = 0; i < n; i++) {
		scanf("%d", &array[i]);
	}
	*/
	createRandomMassiv(array);
	Puzyreck(n, array);

	while ((Check(n, array)) == 0) {
		Podschet(n, array);
	}

	printf("\n");
	for (int i = 0; i < n; i++) {
		printf("%d ", array[i]);
	}
	int t = clock();
	printf("\n%d", t);
	free(array);
	
	return 0;
}
