#include "SampleLib.h"

// Definition d'une fonction de calcul de factorielle.
unsigned int fact( unsigned int value ) {
	unsigned int result = 1;
	while ( value > 1 ) {
		result *= value;
		value --;
	}
	return result;
}

// Definition d'une fonction d'elevation a une puissance donnees.
int power( int value, unsigned int pow ) {
	if ( pow == 0 ) return 1;
	if ( pow == 1 ) return value;int accumulator = 1;
	while( pow > 0 ) {
		accumulator *= value;
		pow--;
	}
	return accumulator;
}

// Exercice 1: Definiton d'une fonction qui affiche "Bonjour"
void bonjour() {
	printf("Bonjour");
}

// Exercice 2: Definition d'une fonction qui permet d'inverser un nombre a 3 chiffres
int inversion(int value){
	return (value % 10) * 100 + 
			((value / 10) % 10) * 10 +
			(value / 100);
}
// Exercice 3: Definition d'une fonction qui calcule le produit de deux réelles
float product(float val1, float val2){
	return val1*val2;
}

// Exercice 4: Definition d'une fonction qui verifie si un nombre est pair ou impair
int parite(int value){
	return (value % 2 == 0) ? 1 : 0;
}

// Exercice 5: Definition d'une procedure qui compare deux nombre entiers
void compare(int value1, int value2){
	if (value1>value2) printf("%d>%d", value1, value2);
	else if (value1<value2) printf("%d<%d", value1, value2);
	else printf("%d = %d", value1, value2);
}

// Exercice 6: Definition d'une procedure qui lit trois entiers pour les afficher en suite dans un ordre croissant
void croissant(int a, int b, int c) {
    int min = (a < b) ? a : b;
    min = (min < c) ? min : c;

    int mid = (a + b + c) - min - ((a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c));

    int max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);

    printf("Par ordre croissant : [ %d, %d, %d ]", min, mid, max);
}