#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, j, space;
	printf("(A)\n");
	for (i = 0; i < 10; i++){
		for (j = 0; j <= i; j++){
			printf("*");
		}
		printf("\n");
	}
	printf("(B)\n");
	for (i = 10; i >= 0; i--){
		for (j = 1; j <= i; j++){
			printf("*");
		}
		printf("\n");
	}
	printf("(C)\n");
	for (i = 1; i <= 10; i++) {
		for (space = 1; space < i; space++) {
			printf(" ");
		}
		for (j = 10; j >= i; j--) {
			printf("*");
		}
		printf("\n");
	}
	printf("(D)\n");
	for (i = 1; i <= 10; i++) {
		for (space = 10; space > i; space--) {
			printf(" ");
		}
		for (j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}