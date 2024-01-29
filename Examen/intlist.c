#include <stdio.h>
#include <stdbool.h>

typedef struct node {
    int val;
    struct node* next;
} node;

bool detect_cycle(node* head) {
    if (head == NULL) {
        return false; // Pas de cycle dans une liste vide
    }

    node* lent = head;
    node* rapide = head;

    while (rapide != NULL && rapide->next != NULL) {
        lent = lent->next;         // Avance d'un nœud à la fois
        rapide = rapide->next->next; // Avance de deux nœuds à la fois

        if (lent == rapide) {
            return true; // Les pointeurs se sont croisés, il y a une boucle
        }
    }

    return false; // Aucune boucle détectée
}

int main() {
    // Exemple d'utilisation
    node* head = NULL;

    // ... Initialisation de la liste ...

    if (detect_cycle(head)) {
        printf("La liste contient une boucle.\n");
    } else {
        printf("La liste ne contient pas de boucle.\n");
    }

    return 0;
}

