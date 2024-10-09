#define _CRT_SECURE_NO_WARNINGS 
#pragma warning(disable:6031)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*void Test() {
	int checkStr1 = "dodododod odo do dod";
	int	checkStr2 = " idu domoi";
}
*/

/*void CreateCleanStr(char* str[1000]) {
	for (int i = 0; i < length2; i++) {
		if (stroka2[i] != ' ') {
			temp += 1;
			cleanStroka2[temp] = stroka2[i];
			printf("%c", cleanStroka2[temp]);
		}
	}
}
*/

/*void Test(char* str1, char* str2) {
	
}
*/
int main(void) {
	const char* stroka1 = "up  u";
	const char* stroka2 = "r ef er";
	const char* cleanStroka2[1000];
	/*int n;
	scanf("%d", &n);*/\

	int length2 = strlen(stroka2);
	
	int temp = -1;
	for (int i = 0; i < length2; i++) {
		if (stroka2[i] != ' ') {
			temp += 1;
			cleanStroka2[temp] = stroka2[i];
			printf("%c", cleanStroka2[temp]);
		}
	}
	
	int finish = temp;
	int lengthClean2 = finish;
	printf("%d", finish);
	//printf("\nfinish = %d\n", finish);
	
	for (int i = 0; i < lengthClean2 - (lengthClean2 % 2) ; i++) {
		if (cleanStroka2[i] != cleanStroka2[lengthClean2 - (lengthClean2 % 2) - i]) {
			printf("Error");
			return 0;
		}
	}


	printf("good");

	/*for (int i = 0; i < lengthClean1 - (lengthClean1 % 2); i++) {
		if (cleanStroka1[i] != cleanStroka1[lengthClean1 - (lengthClean1 % 2) - i]) {
			printf("Error");
			check2 = 0;
			return 0;
		}
	}

	if (check2 == -1) {
		check2 = 1;
	}
	printf("good");
	*/
	return 0;
}
