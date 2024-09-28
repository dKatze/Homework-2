# include <stdio.h>
#include <stdlib.h>

createRandomMassiv(int array[20]) {
	for (int i = 0; i < 20; i++) {
		array[i] = rand() % 15;
	}
}

void swap(int *a, int *b) {
	*a ^= *b;
	*b ^= *a;
	*a ^= *b;
}

int Check(int array[20]) {
	int i = 0;
	while (array[i] < array[19]) {
		i++;
	}
	
	while (array[i] >= array[19]) {
		i++;
		if (i == 18) {
			return 1;
		}
	}
	
	if (i == 18) {
		return 1;
	}
	else {
		return 0;
	}
}


void newPoluQSort(int massiv[20], int first) {
	int i = 0;
	int j = 18;
	int k = 1;
	while (k != 0) {
		while (massiv[i] < first) {
			i++;
		}
		while (massiv[j] >= first) {
			j--;
		}
		if (i > j) {
			k = 0;
			break;
		}
		
		swap(&massiv[i], &massiv[j]);
		
		
	}
}

int Test() {
	int testMassiv1[20] = { 0, 12, 0, 3, 42, 4,-4, -43, -4, 99, 0, 142, 30, 3, 422, 4,-4, -43, -4, 99 };
	int testMassiv2[20] = { 0, 12, 0, 3, 42, 4,-4, -43, -4, 99, 0, 142, 30, 3, 422, 4,-4, -43, -4, 99 };
	//int testMassiv3[20] = { 0, 12, 0, 3, 42, 4,-4, -43, -4, 99, 0, 142, 30, 3, 422, 4,-4, -43, -4, 99 };
	
	int firstElement1 = testMassiv1[0];
	swap(&testMassiv1[0], &testMassiv1[19]);
	newPoluQSort(testMassiv1, firstElement1);

	
	if (Check(testMassiv1) == 1) {
		printf("1st Check : Succees\n");
	}
	else {
		printf("1st Check : Error\n");
	}

	int firstElement2 = testMassiv2[0];
	swap(&testMassiv2[0], &testMassiv2[19]);
	newPoluQSort(testMassiv2, firstElement2);


	if (Check(testMassiv2) == 1) {
		printf("2st Check : Succees\n");
	}
	else {
		printf("2st Check : Error\n");
	}
}

int main(void) {
	/*int massiv[20];
	int firstElement;

	createRandomMassiv(massiv);

	for (int i = 0; i < 20; i++) {
		printf("%d ", massiv[i]);
	}

	firstElement = massiv[0];
	swap(&massiv[0], &massiv[19]);
	newPoluQSort(massiv, firstElement);

	printf("\n");
	for (int i = 0; i < 20; i++) {
		printf("%d ", massiv[i]);
	}
	if (Check(massiv)) {
		printf("\nsuccess!");
	}
	else {
		printf("\nError");
	}*/

	Test();

	
}
