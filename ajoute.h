#ifndef AJOUTE_H_INCLUDED
#define AJOUTE_H_INCLUDED
#include <time.h>

 typedef struct {
        char pseudo[20];
        struct tm premier_mess;
        struct tm dernier_mess;
        int nb_mess;
    }auteur;

#endif // AJOUTE_H_INCLUDED
