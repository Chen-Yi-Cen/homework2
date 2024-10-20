#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	float P = 5000, rate = 10.0, A;
	while (1)
	{
		A = P * pow(1 + rate / 100, 15);
		printf("利率: %.1f%%，15年後的金額: $%.2f\n", rate, A);
		rate = rate + 0.5;
		if (rate > 12)
		{
			break;
		}
	}
	return 0;
}