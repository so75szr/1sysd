#include <stdio.h>

int compte_int(int* arr, int size, int value) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == value) {
            count++;
        }
    }
    return count;
}

int main() {
    int t1[5] = { 2, 42, 1, 42, 9 };
    int t2[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    printf("%d dans t1 : %d fois.\n", 42, compte_int(t1, 5, 42));
    printf("%d dans t1 : %d fois.\n", 2, compte_int(t1, 5, 2));
    printf("%d dans t2 : %d fois.\n", 10, compte_int(t2, 10, 10));
    printf("%d dans t2 : %d fois.\n", 42, compte_int(t2, 10, 42));
}

