#ifndef __MY_MATH_LIB_H
#define __MY_MATH_LIB_H
#include "SampleLib.c"

// Definition d'une fonction de calcul de factorielle.
unsigned int fact( unsigned int value );

// Definition d'une fonction d'elevation a une puissance donnees.
int power( int value, unsigned int pow );

// Exercice 1: Definition d'une procedure qui affiche "Bonjour"
void bonjour();

// Exercice 2: inversion d'un nombre entier a 3 chiffres
int inversion(int value);

// Exercice 3: Definition d'une fonction qui calcule le produit de deux reelles
float product(float val1, float val2);

// Exercice 4: Definition d'une fonction qui verifie si un nombre est pair ou impair
int parite(int value);

// Exercice 5: Definition d'une procedure qui compare deux nombre entiers
void compare(int value1, int value2);

// Exercice 6: Definition d'une procedure qui lit trois entiers pour les afficher en suite dans un ordre croissant
void croissant(int value1, int value2, int value3);

// Exercice 16: Definition d'une procedure qui permet de permuter le contenu de deux variable de type char
void permuter(char *value1, char *value2);

// Exercice 17: Definition d'une fonction qui calcule la somme de deux nombres entiers
int somme(int value1, int value2);

#endif
