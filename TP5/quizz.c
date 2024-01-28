#include<stdio.h>
#include<stdlib.h>

// Quizz : devinez ce que font ces fontions ci-dessous :

int quizz1(char *s) {
    char *p;
    int answer = 0;
    // on fait pointer p vers le début de la
    // chaîne reçu en paramètre
    p = s;
    // *p++ c'est pareil que *(p++)
    // *p++ vaut la même chose que *p et augmente p
    // c'est-à-dire fait avancer p d'un cran dans
    // le tableau de caractère (la chaîne)
    // C'est faux quand p pointe sur "0"
    // on vient de calculer la longueur de la chaîne !
    // et on la renvoie 
    while (*p++) {
        answer++;
    }
    return answer;
}

// Version maintenable de la même fonction (avec un nom de
// variable qui a un sens) :

int strlength(char *s) {
    char *p;
    int length;
    p = s;
    while (*p++) {
        length++;
    }
    return length;
}

// Une autre façon (beaucoup moins dans l'esprit du C)

int strlength2(char *s) {
    int i = 0;
    int length = 0;
    while (s[i++]) {
        length++;
    } 
    return length;
}
// vous pouvez ajouter du code qui
// affiche l'état courant (p, q, *p, *q) avant
// d'entrer dans la bouche while et à chaque
// itératation de la boucle si vous le souhaitez
// printf("p = %lx q = %lx *p = %c *q = %c\n", ... )
int quizz2(char *s1, char *s2) {
    char *p, *q;
    // p commence par pointer sur le début de s1
    // q commence par pointer sur le début de s2
    p = s1;
    q = s2;
    // à chaque itération p et q avancent d'un
    // place
    // la condition pour continuer est 
    // *p vrai (non nul) tant qu'on est pas à la fin de s1
    // *q vrai (non nul) tant qu'on est pas à la fin de s2
    // *p++ == *q++ vaut la même chose que *p == *q
    // vrai si le caractère vers lequel pointe p est le même
    // que celui vers lequel point q
    // autrement dit : dès que l'on est à fin d'une des chaînes
    // OU que les caractère de l'une ou de l'autre diffèrent on
    // sort du while 
    while (*p && *q && *p++ == *q++);
    // arrivé ici de deux choses l'une :
    // on a atteint la fin de l'une des chaîne (voire des deux) 
    // ou bien on a trouvé des caractères qui diffèrent à la
    // même position dans l'une ou l'autre chaîne.

    // renvoie un booléen qui dit "on est allé jusqu'à la
    // fin des deux chaînes s1 et s2"
    // i.e. vrai si les chaînes sont égales.
    return *p == 0 && *q == 0;
}

// forme lisible :

int strequal(char *s1, char *s2) {
    char *p, *q;
    p = s1;
    q = s2;
    // on avance dans s1 et s2 tant qu'on peut
    // et on arrête avant la fin si un caractère 
    // diffèrent
    while (*p && *q && *p++ == *q++);

    return *p == 0 && *q == 0;
}

int main() {
    char t1[] = "Bonjour";
    char t2[] = "Bonjour";
    char t3[] = "Bonsoir tout le monde";
    char t4[] = "Bonjour tout le monde";

    printf("Quizz1 %d\n", quizz1(t1));
    printf("Quizz1 %d\n", quizz1(t3));

    printf("Quizz2 %d\n", strequal(t1, t1));
    printf("Quizz2 %d\n", strequal(t1, t2));
    printf("Quizz2 %d\n", strequal(t1, t3));
    printf("Quizz2 %d\n", strequal(t1, t4));

    exit(0);
}

