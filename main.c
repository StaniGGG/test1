#include <stdio.h>
#include <stdlib.h>

struct list {                               //ZADEFINUJEME NAS LINKED LIST
    char kategoria[50];
    char miesto[50];
    char ulica[100];
    int rozloha;
    int cena;
    char popis[200];
    struct list *next;
};

typedef struct list LIST;                  //OZNACIME PREMENNU LIST



int main(void){
LIST *head=NULL;
    char x;
    scanf("%c", &x);
}
