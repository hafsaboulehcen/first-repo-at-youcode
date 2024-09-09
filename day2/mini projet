// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

typedef struct {
    char titre[20];
    char auteur[20];
    int quantite;
    float prix;
} Livre;
Livre n[200];
int connter =0;
void ajout_livre(){
    printf("entrer le titre :");
    scanf(" %[^\n]s",&n[connter].titre);
    printf("entrer le nom de l'auteur :");
    scanf(" %[^\n]s",&n[connter].auteur);
    printf("entrer la quantite :");
    scanf("%d",&n[connter].quantite);
    printf("entrer le prix :");
    scanf("%f",&n[connter].prix);
    connter++;
    printf("livre ajouté.\n");
}
void affich_livre(){
    int i;
    for(i=0;i<connter;i++){
    printf("livre %d est:\n",i+1);
    printf("le titre :%s\n",n[i].titre);
    printf("le nom de l'auteur:%s\n",n[i].auteur);
    printf("la quantité:%d\n",n[i].quantite);
    printf("le prix:%.2f DH \n",n[i].prix);
    }
}
void recherche_livre(){
    char titrerecherche[20];
    printf("entrer un titre à rechercher :");
    scanf(" %[^\n]s",&titrerecherche);
    for(int i=0;i<connter;i++){
        if(strcmp(n[i].titre,titrerecherche) == 0){
            printf("livre trouvé:\n ");
            printf("titre:%s\n",n[i].titre);
            printf("auteur:%s\n",n[i].auteur);
            printf("quantite:%d\n",n[i].quantite);
            printf("prix:%.2f DH \n",n[i].prix);
            return;
        }
    }
    printf("ce livre ne se trouve pas.\n");   
}    
void met_a_jour(){
    char titrerecherche[20];
    printf("Entrez le titre du livre à mettre à jour: ");
    scanf(" %[^\n]s",&titrerecherche);
    for (int i = 0; i < connter; i++) {
          if (strcmp(n[i].titre, titrerecherche) == 0) {
            printf("Entrez la nouvelle quantité: ");
            scanf("%d", &n[i].quantite);
            printf("cette quantité est mise à jour.\n ");
            return;
        }
    }
    printf("ce livre ne se trouve pas.\n");
}
void supprimer_livre(){
    char titrerecherche[20];
    printf("Entrez le titre du livre à supprimer: ");
    scanf(" %[^\n]s",&titrerecherche);
    for (int i = 0; i < connter; i++) {
        if (strcmp(n[i].titre, titrerecherche) == 0) {
            for (int j = i; j < connter - 1; j++) {
                n[j] = n[j + 1];
            }
            connter--;
            printf("Livre supprimé.\n");
            return;
        }
    }
    printf("ce livre ne se trouve pas.\n");
    }
void affich_nbr_total() {
    int total = 0;
    for (int i = 0; i < connter; i++) {
        total = total + n[i].quantite;
    }
    printf("le nombre total de livres en stock est: %d\n", total);
}
int main(){
  int choix =0;
  do{
    printf("1_ajouter un livre au stock.\n");
    printf("2_afficher tous les livres disponibles.\n");
    printf("3_rechercher un livre par son titre.\n");
    printf("4_mettre à jour la quantité.\n");
    printf("5_supprimer un livre du stock.\n");
    printf("6_afficher le nombre total des livres en stock.\n");
    printf("entrer un choix:");
      scanf("%d",&choix);
    switch(choix){
        case 1:
            ajout_livre();
            break;
        case 2:
            affich_livre();
            break;
        case 3:
            recherche_livre();
            break;
        case 4:
            met_a_jour();
            break;
        case 5:
            supprimer_livre();
             break;
        case 6:
            affich_nbr_total();
            break;
        default:
            printf("votre choix est invalide.\n");
    } 
}while(choix !=0);
    return 0;
}
