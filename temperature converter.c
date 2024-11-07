#include <stdio.h>

double KtoC(double k) { return k - 273.15; }
double KtoF(double k) { return (k - 273.15) * 9.0 / 5.0 + 32.0; }
double CtoK(double c) { return c + 273.15; }
double CtoF(double c) { return c * 9.0 / 5.0 + 32.0; }
double FtoK(double f) { return (f - 32) * 5.0 / 9.0 + 273.15; }
double FtoC(double f) { return (f - 32) * 5.0 / 9.0; }

int main() {
    int from, to;
    double value;

    while (1) {
        printf("\n----------------TEMP CONVERTER----------------\n");
        printf("Choose the temperature scale to convert from:\n");
        printf("1. Kelvin\n2. Celsius\n3. Fahrenheit\n\nChoose: ");
        scanf("%d", &from);

        if (from < 1 || from > 3) {
            printf("Invalid option\n");
            continue;
        }

        printf("\nChoose the scale to convert to:\n");
        switch (from) {
            case 1: printf("1. Celsius\n2. Fahrenheit\n\nChoose: "); break;
            case 2: printf("1. Kelvin\n2. Fahrenheit\n\nChoose: "); break;
            case 3: printf("1. Kelvin\n2. Celsius\n\nChoose: "); break;
        }
        scanf("%d", &to);

        if (to < 1 || to > 2) {
            printf("Invalid option\n");
            continue;
        }

        printf("Input value: ");
        scanf("%lf", &value);

        switch (from * 10 + to) {
            case 11: printf("Celsius: %.2lf\n", KtoC(value)); break;
            case 12: printf("Fahrenheit: %.2lf\n", KtoF(value)); break;
            case 21: printf("Kelvin: %.2lf\n", CtoK(value)); break;
            case 22: printf("Fahrenheit: %.2lf\n", CtoF(value)); break;
            case 31: printf("Kelvin: %.2lf\n", FtoK(value)); break;
            case 32: printf("Celsius: %.2lf\n", FtoC(value)); break;
            default: printf("Invalid option.\n"); break;
        }
    }
}