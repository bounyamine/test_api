#include <stdio.h>
#include <stdlib.h>
#include "SampleLib.h"

int main(void) {
//	int result = power( 2, 3 );
//	printf( "2^3 == %d\n", result );
//	result = fact( 6 );
//	printf( "6! == %d\n", result );
//
    printf("\n-----------------------Travaux Pratiques------------------------------\n\n");
    int exercice;
    while(1) {
        printf("1. Exercice 1\n2. Exercice 2\n3. Exercice 3\n4. Exercice 4\n5. Exercice 5\n6. Exercice 6\n0. Sortir\n\n Votre choix : ");
        scanf("%d", &exercice);
        switch(exercice) {
            case 1:// Exercice 1
                printf("--------------------------------------------------------------");
                printf("\nExercice 1: Definiton d'une fonction qui affiche \"Bonjour\"\n");
                bonjour();
                printf("\n--------------------------------------------------------------\n\n");
                break;
            case 2:// Exercice 2
                printf("--------------------------------------------------------------");
                printf("\nExercice 2: Definition d'une fonction qui permet d'inverser un nombre a 3 chiffres\n");
                int val, inv;
                printf("Entrer un nombre a 3 chiffres : ");
                scanf("%d", &val);
                inv = inversion(val);
                printf("L'inversion de %d est %d", val, inv);
                printf("\n--------------------------------------------------------------\n\n");
                break;
            case 3: // Exercice 3
                printf("--------------------------------------------------------------");
                printf("\nExercice 3: Definition d'une fonction qui calcule le produit de deux nombres reels\n");
                float a, b, prod;
                printf("Entrer deux nombres reels :\na =  ");
                scanf("%f", &a);
                printf("b = ");
                scanf("%f", &b);
                prod = product(a, b);
                printf("%.3f * %.3f = %.3f", a, b, prod);
                printf("\n--------------------------------------------------------------\n\n");
                break;
            case 4: // Exercice 4
                printf("--------------------------------------------------------------");
                printf("\nExercice 4: Definition d'une fonction qui verifie si un nombre est pair ou impair\n");
                int number;
                printf("Entrer un nombre entier : ");
                scanf("%d", &number);
                if (parite(number) == 1)
                    printf("%d est un nombre pair", number);
                else
                    printf("%d est un nombre impair", number);
                printf("\n--------------------------------------------------------------\n\n");
                break;
            case 5: // Exercice 5
                printf("--------------------------------------------------------------");
                printf("\nExercice 5: Definition d'une procedure qui compare deux nombre entiers\n");
                int x, y;
                printf("Entrer deux nombres entiers :\nx = ");
                scanf("%d", &x);
                printf("y = ");
                scanf("%d", &y);
                compare(x, y);
                printf("\n--------------------------------------------------------------\n\n");
                break;
            case 6: // Exercice 6
                printf("--------------------------------------------------------------");
                printf("\nExercice 6: Definition d'une procedure qui lit trois entiers pour les afficher en suite dans un ordre croissant\n");
                int i, j, k;
                printf("Entrer trois nombres :\na = ");
                scanf("%d", &i);
                printf("b = ");
                scanf("%d", &j);
                printf("c = ");
                scanf("%d", &k);
                croissant(i, j, k);
                printf("\n--------------------------------------------------------------\n\n");
                break;
            default:
                printf("Merci d'avoir utilise ce programme.\n");
                return EXIT_SUCCESS;
        }
    }
}