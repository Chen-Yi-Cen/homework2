#include <stdio.h>
#include <stdlib.h>

int main() {
    int code;
    float weeklyPay;
    while(1){
    printf("�п�J���u�����N�X (1 = menager, 2 = hourly worker, 3 = commission worker, 4 = pieceworker): ");
    scanf_s("%d", &code);
    switch (code) {
    case 1: {
        float salary;
        printf("�п�J�g�z���T�w�P�~: ");
        scanf_s("%f", &salary);
        weeklyPay = salary;
        break;
    }
    case 2: {
        float hourlyWage;
        int hoursWorked;
        printf("�п�J�p�ɤu���C�p�ɤu��: ");
        scanf_s("%f", &hourlyWage);
        printf("�п�J�p�ɤu���u�@�p�ɼ�: ");
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
        printf("�п�J�����u���P���`�B: ");
        scanf_s("%f", &sales);
        weeklyPay = 250 + (sales * 0.057);
        break;
    }
    case 4: {
        int pieces;
        float wagePerPiece;
        printf("�п�J�p��u���C��u��: ");
        scanf_s("%f", &wagePerPiece);
        printf("�п�J�p��u�������ƶq: ");
        scanf_s("%d", &pieces);
        weeklyPay = wagePerPiece * pieces;
        break;
    }
    default:
        printf("�L�Ī��N�X�A�п�J1��4�������Ʀr�C\n");
        return 1;
    }
    printf("�ӭ��u���P�~��: %.2f\n", weeklyPay);
    }
	return 0;
}