#include<stdio.h>
#include<stdlib.h>

int main() {
    int i = 1, max = 50;

    while (i <= max) {
        printf("%d ", i*i);
        i++;
    }
    printf("\n");
    exit(0);
}

