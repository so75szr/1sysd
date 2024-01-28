#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]) {
    double x,y;
    char op;

    x = strtod(argv[1], NULL);
    y = strtod(argv[2], NULL);
    op = argv[3][0];

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


