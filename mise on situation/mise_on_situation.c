#include <stdio.h>

void moyenne(int nbr_etudiants, float tableaux[nbr_etudiants])
{
    float result, somme = 0;
    for (int i = 0; i < nbr_etudiants; i++)
    {
        somme += tableaux[i];
    }
    result = somme / nbr_etudiants;
    printf("moyenne est %.2f", result);
}
void note_max_min(int nbr_etudiants, float tableaux[nbr_etudiants]){

    float max=tableaux[0];
    float min=tableaux[0];
    for (int i = 1; i < nbr_etudiants; i++)
    {
       if(tableaux[i]>max){
        max=tableaux[i];
       }
       if(tableaux[i]<min){
        min=tableaux[i];
       }
    }
    printf("Note la plus basse: %.2f\n", min);
    printf("Note la plus elevee: %.2f\n",max);
}
void affich_notes_superieures_a_moyenne(int nbr_etudiants, float tableaux[nbr_etudiants]){
    float result,somme=0;
     for (int i = 0; i < nbr_etudiants; i++)
    {
        somme += tableaux[i];
    }
    result = somme / nbr_etudiants;
   
    printf("Notes superieures a la moyenne: ");
    for (int i = 0; i < nbr_etudiants; i++) {
        if (tableaux[i] > result) {
            printf("%.2f ",tableaux[i]);
        }
    }
    printf("\n");
    
}
void Etudiants_Validation_Rattrapage(int nbr_etudiants, float tableaux[nbr_etudiants]){
    int valide,rattrapage;
    valide=0;
    rattrapage=0;
    for (int i = 0; i < nbr_etudiants; i++) {
        if (tableaux[i] >= 12) {
            valide++;
        } else {
            rattrapage++;
        }
    }
    printf("Nombre d'etudiants ayant valide: %d\n", valide);
    printf("Nombre d'etudiants en rattrapage: %d\n", rattrapage);
    }


int main()
{
    int nbr_etudiants;
    float result;
    printf("Combien d'etudiants y a-t-il ? ");

    scanf("%d", &nbr_etudiants);
    float tableaux[nbr_etudiants];

    for (int i = 0; i < nbr_etudiants; i++)
    {
        printf("Entrez la note de l'etudiant %d: ", i + 1);
        scanf("%f", &tableaux[i]);
    }
    int choix;
    do
    {

        printf("\nQue souhaitez-vous faire ?\n");
        printf("1. Calculer la moyenne des notes\n");
        printf("2. Trouver la note la plus elevee et la plus basse\n");
        printf("3. Afficher toutes les notes superieures a la moyenne\n");
        printf("4. Compter le nombre d'etudiants ayant valide et en rattrapage\n");
        printf("5. Quitter\n");
        printf("Choisissez une option: ");
        scanf("%d", &choix);

        switch (choix)
        {
        case 1:
            moyenne(nbr_etudiants, tableaux);
            break;
        case 2:
            note_max_min( nbr_etudiants,tableaux);
            break;
        case 3:
            affich_notes_superieures_a_moyenne(nbr_etudiants,tableaux);
            break;
        case 4:
            Etudiants_Validation_Rattrapage(nbr_etudiants,tableaux);
            break;
        case 5:
            printf("au revoir !");
            break;
        default:
            printf("votre choix est invalide.");
        }
    } while (choix != 8);
    return 0;
}
