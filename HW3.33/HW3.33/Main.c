#include <stdio.h>
#include <stdlib.h>

int main()
{
	int length, breadth, i, j;
	printf("Enter the length: ");
	scanf_s("%d", &length);
	printf("Enter the breadth: ");
	scanf_s("%d", &breadth);
	for (i = 1; i <= length; i++)
	{
		for (j = 1; j <= breadth; j++)
		{
			if ((i == 1) || (i == length) || (j == 1) || (j == breadth))
				printf("+");
			else
				printf(" ");
		}
		printf("\n");
	}
	return 0;
}