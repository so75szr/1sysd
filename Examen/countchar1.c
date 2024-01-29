#include <stdio.h>

int count_char(char* str, char c) {
    int count = 0;
    for(int i = 0; str[i] != '\0'; i++) {
        if (str[i] == c) {
            count++;
        }
    }
    return count;
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Usage: %s <character> <string>\n", argv[0]);
        return 1;
    }
    char c = argv[1][0];
    char* str = argv[2];
    printf("%d\n", count_char(str, c));
    return 0;
}

