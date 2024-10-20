#include <stdio.h>
#include <stdlib.h>
int main()
{
    float sales, salary;
    while (1) {
        printf("Enter sales in dollars (-1 to end): ");
        scanf_s("%f", &sales);
        if (sales == -1) {
            break;
        }
        salary = sales * 0.09 + 200;
        printf("Salary is: $%.2f\n", salary);
        printf("\n");
    }
    return 0;
}