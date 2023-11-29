#include <stdio.h>
#include <stdlib.h>
#include"ajoute.h"

void Ajouter_auteur(auteur* a , auteur T[] ,int *n);
void afficher_tab_auteur(auteur T[] , int n);
int main()
{
    int n ;
    printf("entrer le nombre des auteurs : \n ");
    scanf("%d",&n);
    auteur a1 , a2 , a3 ;
    auteur *T = (auteur*)malloc(n*sizeof(auteur));
    Ajouter_auteur(&a1,T,&n);
    Ajouter_auteur(&a2,T,&n);
    Ajouter_auteur(&a3,T,&n);
    afficher_tab_auteur(T,n);
    free(T);
    return 0;
}
void Ajouter_auteur(auteur* a , auteur T[] ,int *n){
    T[*n]=*a ;
    T = (auteur*)realloc(T,((*n)++)*sizeof(auteur));
}
void afficher_tab_auteur(auteur T[] , int n){
    for (int i = 0 ; i<n ; i++ ){
        printf("Auteur %d:\n", i + 1);
        printf("Pseudo: %s\n", T[i].pseudo);
        printf("Premier message: %02d-%02d-%04d\n", T[i].premier_mess.tm_mday, T[i].premier_mess.tm_mon + 1, T[i].premier_mess.tm_year);
        printf("Dernier message: %02d-%02d-%04d\n", T[i].dernier_mess.tm_mday, T[i].dernier_mess.tm_mon + 1, T[i].dernier_mess.tm_year);
        printf("Nombre de messages: %d\n", T[i].nb_mess);
        printf("\n");
    }
}
