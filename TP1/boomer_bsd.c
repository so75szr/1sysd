#include<stdio.h>
#include<stdlib.h>

int main()
{
    int age;

    printf("Quel est votre âge ? ");
    scanf("%d", &age);

    if (age > 42)
    {
        printf("Ok Boomer!\n");
    }
    else
    {
        printf("Time to learn UNIX then!\n");
    }

    exit(0);
}

