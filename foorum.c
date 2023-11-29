// travaille de mini orojet forum
//1er tel 1
//nomes des binomes :
// salim belkhir
//fatma missaoui
//insaf fares
#include <stdio.h>
#include <stdlib.h>
#include "forum.h"
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

int main()
    {
        forum f ;
        message m ;
        rubrique r ;
        auteur a ;
        profil p ;

        saisie_forum();
        saisie_mess();
        saisie_rub();
        saisie_aut();
        saisie_prof();

        afficher_forum(f);
        afficher_mess(m);
        afficher_rub(r);
        afficher_aut(a);
        afficher_prof(p);

    return 0;
    }
forum saisie_forum(){
    forum f ;
    printf("saisir l'adresse mail: \n ");
    scanf("%s",&f.ad_mail);
    printf("sisir l'adresse net: \n");
    scanf("%s",&f.ad_net);

};
rubrique saisie_rub()
{
    rubrique r ;
    printf("saisir le theme :");
    scanf("%s",&r.theme);
    printf("saisie le date de creation :");
    scanf("%02d/%02d/%d",&r.date_de_creation.tm_mday,&r.date_de_creation.tm_mon,&r.date_de_creation.tm_year);
    printf("saisir l'adresse mail :");
    scanf("%s",r.adresse_email);
    printf("saisir la liste des sites :");
    scanf("%s",r.L_sites);
}

 message saisie_mess()
  {

   message m;
   printf("saisir le titre: ");
   scanf("%s",&m.titre);
   printf("saisir le texte: ");
   scanf("%s",&m.text);
   printf("saisir la date de publication: ");
   scanf("%02d/%02d/%d",&m.date_de_publication.tm_mday,&m.date_de_publication.tm_mon,&m.date_de_publication.tm_year);
   return m ;
  }
   auteur saisie_aut(){
     auteur a;
     printf("saisir le pseudo: ");
     scanf("%s",&a.pseudo);
     printf("saisir la date du premier message :");
     scanf("%d/%02d/%d\n",&a.premier_mess.tm_mday ,&a.premier_mess.tm_mon,&a.premier_mess.tm_year);
     printf("siasir la date du dernier message:");
     scanf("%d/%02d/%d\n",&a.dernier_mess.tm_mday,&a.dernier_mess.tm_mon ,&a.dernier_mess.tm_year);
     printf("sisir le nb de message : ");
     scanf("%d",&a.nb_mess);
     return a ;
   }

  profil saisie_prof(){
       profil p ;
       printf("saisir le numero d'inscription: ");
       scanf("%d",&p.ins_num);
       printf("saisir le nom: ");
       scanf("%s",&p.nom);
       printf("saisir le prenom: ");
       scanf("%s",&p.prenom);
       printf("saisir l'adresse: ");
       scanf("%d-%d-%d",p.ad.rue,p.ad.ville,p.ad.code_postal);
       printf("saisir le date de naissance: ");
       scanf("%d/%d/%d",p.date_de_naissance.tm_mday,p.date_de_naissance.tm_mon,p.date_de_naissance.tm_year);
       printf("saisir l'adresse mail: ");
       scanf("%s",p.adresse_email);
       printf("saisir le numero de telephone: ");
       scanf("%d",p.num_tel);
   }




   void  afficher_forum(forum f)

    {

      adresse ad ;
      printf("l'adresse d'internet et l'adresse email estz ",f.ad_net,f.ad_mail );

     }
     void afficher_mess(message m){
       printf("le titre est %s, le texte est %s, la date de publication est %02d/%02d/%d ",m.titre,m.text,m.date_de_publication.tm_mday,m.date_de_publication.tm_mon,m.date_de_publication.tm_year );

     }
     void afficher_rub(rubrique r){
         printf("le theme est %s , la date de creation est: %02d/02%d/%d , l'adresse email est: %s , la liste des sites est: %s",r.theme ,r.date_de_creation.tm_mday ,r.date_de_creation.tm_mon ,r.date_de_creation.tm_year,r.adresse_email , r.L_sites );
     }
     void afficher_aut(auteur a){
         printf("le pseudo est : %s , la date de premier message est : %02d/%02d/%d , la date de dernier de message %02d/%02d/%d ,le nombre des messages :%d",a.pseudo ,a.premier_mess.tm_mday,a.premier_mess.tm_mon ,a.premier_mess.tm_year ,a.dernier_mess.tm_mday ,a.dernier_mess.tm_mon ,a.dernier_mess.tm_year,a. nb_mess);

     }
     void afficher_prof(profil p)
     {

         printf("le numero d'inscription est : %d",p.ins_num);
         printf("le nom est : %s",p.nom);
         printf("le prenom est : %s",p.prenom);
         printf("l'adresse  est : %s,%s,%d",p.ad.rue,p.ad.ville,p.ad.code_postal);
         printf("la date de naisssance  est : %02d/%02d/%d",p.date_de_naissance.tm_mday,p.date_de_naissance.tm_mon,p.date_de_naissance.tm_year);
         printf("l'adresse email est : %s",p.adresse_email);
         printf("le numero de telephone est : %d",p.num_tel);

     }

