#include <stdio.h>
#include <string.h>
#include <ctype.h>

int count_char(char* str, char c, int ignore_case) {
    int count = 0;
    if (ignore_case) {
        char lower_c = tolower(c);
        for(int i = 0; str[i] != '\0'; i++) {
            if (tolower(str[i]) == lower_c) {
                count++;
            }
        }
    } else {
        for(int i = 0; str[i] != '\0'; i++) {
            if (str[i] == c) {
                count++;
            }
        }
    }
    return count;
}

int main(int argc, char *argv[]) {
    if (argc < 3 || argc > 4) {
        printf("Usage: %s <character> <string> [-i]\n", argv[0]);
        return 1;
    }
    char c = argv[1][0];
    char* str = argv[2];
    int ignore_case = argc == 4 && strcmp(argv[3], "-i") == 0;
    printf("%d\n", count_char(str, c, ignore_case));
    return 0;
}

