#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int x;
	printf("Enter number : ");
	scanf("%d", &x);
	for (int i = 0; i <= x; i++) {
		printf("*");
	}
	for (int j = 1; j <= x; j++) {
		printf("\n*");
		for (int k = 2; k <= x; k++) {
			printf(" ");
		}
		printf("*");
	}
	printf("\n");
	for (int y = 0; y <= x; y++) {
		printf("*");
	}
}   