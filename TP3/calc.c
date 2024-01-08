#include<stdio.h>
#include<stdlib.h>

int main() {
    double x,y;
    char op;

    printf("Premier nombre : ");
    scanf("%lf", &x);
    printf("Second nombre : ");
    scanf("%lf", &y);
    printf("Opération [+, -, *, /] : ");
    scanf(" %c", &op); 
    switch (op) {
        case '+':
            printf("Résultat : %.2f\n", x + y);
            break;
        case '-':
            printf("Résultat : %.2f\n", x - y);
            break;
        case '*':
            printf("Résultat : %.2f\n", x * y);
            break;
        case '/':
            printf("Résultat : %.2f\n", x / y);
            break;
        default:
            printf("Opération inconnue.\n");
    }
    exit(0);
}


