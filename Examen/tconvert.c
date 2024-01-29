#include <stdio.h>

float celsius2fahrenheit(float celsius) {
    return (9.0/5.0) * celsius + 32;
}

float fahrenheit2celsius(float fahrenheit) {
    return (fahrenheit - 32) * 5.0/9.0;
}

int main() {
    char choice;
    float temperature;

    printf("Saisissez 1 pour convertir de Celsius à Fahrenheit ou 2 pour convertir de Fahrenheit à Celsius : ");
    scanf(" %c", &choice);
    printf("Saisissez la température : ");
    scanf("%f", &temperature);

    switch (choice) {
        case '1':
            printf("%.2f°C équivaut à %.2f°F\n", temperature, celsius2fahrenheit(temperature));
            break;
        case '2':
            printf("%.2f°F équivaut à %.2f°C\n", temperature, fahrenheit2celsius(temperature));
            break;
        default:
            printf("Choix invalide\n");
    }

    return 0;
}

