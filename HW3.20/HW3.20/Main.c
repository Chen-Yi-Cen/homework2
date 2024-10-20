#include <stdio.h>
#include <stdlib.h>

int main()
{
	float hours, rate, salary;
	while (1)
	{
		printf("Enter # of hours worked (-1 to end): ");
		scanf_s("%f", &hours);
		if (hours == -1)
		{
			break;
		}
		printf("Enter hourly rate of the worker ($00.00): ");
		scanf_s("%f", &rate);
		if (hours <= 40)
		{
			salary = hours * rate;
			printf("Salary is $%.2f\n\n", salary);
		}
		else
		{
			salary = (hours * rate) + (hours - 40) * 0.5 * rate;
			printf("Salary is $%.2f\n\n", salary);
		}
	}
	return 0;
}