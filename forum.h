#ifndef FORUM_H_INCLUDED
#define FORUM_H_INCLUDED
#include <time.h>


    typedef struct {
        char rue[50] ;
        char ville[50];
        int code_postal ;
    }adresse;

    typedef struct {
        char titre[100];
        char text[100];
        struct tm date_de_publication ;

    }message;

    typedef struct {
        char theme[20];
        struct tm date_de_creation ;
        char adresse_email[20];
        char L_sites[100];
    }rubrique;

    typedef struct {
        char pseudo[20];
        struct tm premier_mess;
        struct tm dernier_mess;
        int nb_mess;
    }auteur;


    typedef struct {
        int ins_num ;
        char nom[20];
        char prenom[20];
        adresse ad ;
        struct tm date_de_naissance ;
        char adresse_email[20] ;
        int num_tel ;
    }profil;

    typedef struct
    { char ad_net[30];
      char ad_mail[30];

    }forum;

forum saisie_forum();
message saisie_mess();
rubrique saisie_rub();
auteur saisie_aut();
profil saisie_prof();

void afficher_forum(forum f);
void afficher_mess(message m);
void afficher_rub(rubrique r);
void afficher_aut(auteur a);
void afficher_prof(profil p);




#endif // FIRST_PROJECT_H_INCLUDED








