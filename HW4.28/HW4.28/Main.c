#include <stdio.h>
#include <stdlib.h>

int main() {
    int code;
    float weeklyPay;
    while(1){
    printf("請輸入員工類型代碼 (1 = menager, 2 = hourly worker, 3 = commission worker, 4 = pieceworker): ");
    scanf_s("%d", &code);
    switch (code) {
    case 1: {
        float salary;
        printf("請輸入經理的固定周薪: ");
        scanf_s("%f", &salary);
        weeklyPay = salary;
        break;
    }
    case 2: {
        float hourlyWage;
        int hoursWorked;
        printf("請輸入計時工的每小時工資: ");
        scanf_s("%f", &hourlyWage);
        printf("請輸入計時工的工作小時數: ");
        scanf_s("%d", &hoursWorked);
        if (hoursWorked <= 40) {
            weeklyPay = hourlyWage * hoursWorked;
        }
        else {
            weeklyPay = (hourlyWage * 40) + ((hoursWorked - 40) * hourlyWage * 1.5);
        }
        break;
    }
    case 3: {
        float sales;
        printf("請輸入佣金工的銷售總額: ");
        scanf_s("%f", &sales);
        weeklyPay = 250 + (sales * 0.057);
        break;
    }
    case 4: {
        int pieces;
        float wagePerPiece;
        printf("請輸入計件工的每件工資: ");
        scanf_s("%f", &wagePerPiece);
        printf("請輸入計件工的完成數量: ");
        scanf_s("%d", &pieces);
        weeklyPay = wagePerPiece * pieces;
        break;
    }
    default:
        printf("無效的代碼，請輸入1至4之間的數字。\n");
        return 1;
    }
    printf("該員工的周薪為: %.2f\n", weeklyPay);
    }
	return 0;
}