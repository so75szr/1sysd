#include<stdio.h>
#include<stdlib.h>
#include<string.h> // Pour avoir strlen !


// Renvoie 0 si pas un palindrome,
// renvoie 1 si est un palindrome
// version avec indices.
int palindrome(char *s) {
  int i, j;
  int n = 0; // nombre d'itérations
  printf("DEBUG : test de %s... ", s);
  i = 0;                // début
  j = strlen(s) - 1;    // fin
  while ( i < j && s[i++] == s[j--] ) {
      n++;
  };
  printf("%d itérations.\n", n);
  return s[i] == s[j];
}

int main() {
    char word1[] = "radar";     // palindrome impair (5)
    char word2[] = "serres";    // palindrome pair (6)
    char word3[] = "hexagone";  // pas un palindrome

    char *words[] = { word1, word2, word3 };
    for (int i = 0; i < 3; i++) {
        if (palindrome(words[i])) {
            printf("%s est un palindrome.\n", words[i]);
        } else {
            printf("%s n'est pas un palindrome.\n", words[i]);
        }
    }
    exit(0);
}

