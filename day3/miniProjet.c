#include <stdio.h>
#include <string.h>
typedef struct{
    char nom[30];
    char nbr_tele[20];
    char e_mail[30];
}contact;
contact n[200];
int nbr_contact = 0;
void ajout_contact() {
    printf("Entrez le nom du contact : ");
    scanf(" %[^\n]", n[nbr_contact].nom);
    printf("Entrez le numéro de téléphone : ");
    scanf(" %[^\n]", n[nbr_contact].nbr_tele);
    printf("Entrez l'adresse e-mail : ");
    scanf(" %[^\n]", n[nbr_contact].e_mail);
    nbr_contact++;
}
void modf_contact(){
    char nomrecherche[30];
    printf("entrer un nom du contact pour le modifier :");
    scanf(" %[^\n]s",&nomrecherche);
    for (int i = 0; i < nbr_contact; i++)
    {
        if (strcmp(n[i].nom, nomrecherche) == 0) {
            printf("Contact trouvé :\nnom : %s\nnbr_tele : %s\ne_mail : %s\n", 
                   n[i].nom, n[i].nbr_tele, n[i].e_mail);
            printf("Entrez le nouveau numero de telephone: ");
            scanf(" %[^\n]", n[i].nbr_tele);
            printf("Entrez la nouvelle adresse e-mail: ");
            scanf(" %[^\n]", n[i].e_mail);
            
            printf("Les informations ont été mises à jour avec succès.\n");
            return;
        }
    }    
    printf("Contact non trouvé.\n");
}
void supprimer_contact(){
    char nomrecherche[30];
    printf("Entrez le nom du contact à supprimer: ");
    scanf(" %[^\n]s",&nomrecherche);
    for (int i = 0; i < nbr_contact; i++) {
        if (strcmp(n[i].nom,nomrecherche) == 0) {
            for (int j = i; j < nbr_contact- 1; j++) {
                n[j] = n[j + 1];
            }
            nbr_contact--;
            printf("contact supprimé.\n");
            return;
        }
    }
    printf("ce contact ne se trouve pas.\n");
}
void affich_contact(){
    int i;
    for(i=0;i<nbr_contact;i++){
    printf("contact %d est:\n",i+1);
    printf("le nom :%s\n",n[i].nom);
    printf("le numero de tele:%s\n",n[i].nbr_tele);
    printf("l'adresse email:%d\n",n[i].e_mail);
    }
}
void recherche_contact(){
    char nomrecherche[30];
    printf("entrer le nom du contact à rechercher :");
    scanf(" %[^\n]s",&nomrecherche);
    for(int i=0;i<nbr_contact;i++){
        if(strcmp(n[i].nom,nomrecherche) == 0){
            printf("contact trouvé:\n ");
            printf("nom:%s\n",n[i].nom);
            printf("numero de tele:%s\n",n[i].nbr_tele);
            printf("l'adresse email:%d\n",n[i].e_mail);
            return;
        }
    }
    printf("ce contact ne se trouve pas.\n");   
} 
int main(){
  int choix =0;
  do{
    printf("1_ajouter un contact.\n");
    printf("2_afficher tous les contacts.\n");
    printf("3_rechercher un contact.\n");
    printf("4_supprimer un contact.\n");
    printf("5_modifier un contact.\n");
    printf("entrer un choix:");
      scanf("%d",&choix);
    switch(choix){
        case 1:
            ajout_contact();
            break;
        case 2:
            affich_contact();
            break;
        case 3:
            recherche_contact();
            break;
        case 4:
            supprimer_contact();
            break;
        case 5:
            modf_contact();
             break;
        default:
            printf("votre choix est invalide.\n");
    } 
}while(choix !=0);
    return 0;
}