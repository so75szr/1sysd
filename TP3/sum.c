#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 4) {
        printf("Usage: calc <num1> <num2> <operation>\n");
        return 1;
    }
    
    float num1 = strtof(argv[1], NULL);
    float num2 = strtof(argv[2], NULL);
    char op = argv[3][0];
    float result;

    switch(op) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            result = num1 / num2;
            break;
        default:
            printf("Invalid operation\n");
            return 1;
    }

    printf("%.2f\n", result);
    return 0;
}
