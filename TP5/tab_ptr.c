#include<stdio.h>
#include<stdlib.h>

int main() {
    // Un tableau d'entiers
    int data[] = { 2, 1, 42 , 0, -1 };

    // Rappel un tableau est (essentiellement) un pointeur
    // sur son premier élément
    int *p;
    // on peut donc faire :
    p = data;

    printf("%d\n", *(p + 2));
    printf("%d\n", *(data + 2));
    printf("%d\n", data[2]);
    // What ??
    printf("%d\n", 2[data]);
    for (int i = 0; i < 5; i++) {
        printf("%d\n", data[i]); // ok 
        printf("%d\n", i[data]); // What ?? Ne faites pas ça en vrai...
        printf("%d\n", *(data + i)); 
        printf("%d\n", *(i + data));
    }
    exit(0);
}

    

