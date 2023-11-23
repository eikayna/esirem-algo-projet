//1.5-Enumération: choix du joueur

#include<stdio.h>

enum choixjoueur{
	TIRER,
	RESTER,
	DOUBLER,
	ABANDONNER
};
int main() {
    enum choixjoueur choix=TIRER;
    switch (choix){
        case TIRER:
            printf( "le joueur a choisi de tirer une nouvelle carte\n");
            break;
        case RESTER:
            printf("le joueur a choisi d'utiliser ses cartes actuelles\n");
            break;
        case DOUBLER:
            printf("le joueur a choisi de tirer une unique carte et d'utiltiser les cartes obtenues\n");
            break;
        case ABANDONNER:
            printf("le joueur a choisi d'abandonner le tour en échange de la moitié de sa mise\n");
            break;
        default:
            printf("ce choix n'est pas reconnu\n");
    };
    return 0;
};
   