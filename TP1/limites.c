#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#include<time.h>

// man 3 rand

int main() {
    int n, val;

    printf("RAND_MAX = %d\n", RAND_MAX);
    printf(" INT_MAX = %d\n",  INT_MAX);
    printf("taille d'un int = %d\n",  sizeof(int));

    n = rand();
    printf("Au hasard : %d\n", n);

    printf("On réinitialise la graine (seed)\n");
    // time renvoie le nb de seconde depuis le 01/01/1970 à 00:00
    srand(time(NULL));
    n = rand();
    printf("Au hasard : %d\n", n);

    // avec modulo pour être entre 1 et 10 (mettons)

    n = rand() % 10 + 1; // modulo 10 + 1
    printf("Au hasard (modulo 10 + 1) : %d\n", n);

    // 2**31 -1 : plus grande valeur entière signée représentable
    // en "complément à deux" 
    val = 2147483647;
    printf("%d %d\n", val, val + 1);

    exit(0);
}

