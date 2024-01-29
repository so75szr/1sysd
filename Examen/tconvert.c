#include <stdio.h>

float celsius2fahrenheit(float celsius) {
    return (9.0 / 5.0) * celsius + 32;
}

float fahrenheit2celsius(float fahrenheit) {
    return (fahrenheit - 32) * 5.0 / 9.0;
}

int main() {
    char choix;
    float temperature, resultat;

    printf("Choisissez la conversion :\n");
    printf("1. Celsius vers Fahrenheit\n");
    printf("2. Fahrenheit vers Celsius\n");
    scanf(" %c", &choix);

    printf("Saisissez la température : ");
    scanf("%f", &temperature);

    switch (choix) {
        case '1':
            resultat = celsius2fahrenheit(temperature);
            printf("%.2f Celsius équivaut à %.2f Fahrenheit\n", temperature, resultat);
            break;
        case '2':
            resultat = fahrenheit2celsius(temperature);
            printf("%.2f Fahrenheit équivaut à %.2f Celsius\n", temperature, resultat);
            break;
        default:
            printf("Choix invalide.\n");
            return 1;
    }

    return 0;
}

