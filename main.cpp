/**
 * \file main.cpp
 *
 * Démo pour comparer les opérateurs d'égalité en fonction amie vs membre
 *
 *  Created on: 2020-10-21
 * \author Pascal Charpentier
 */

#include "comparableF.h"
#include "comparableM.h"
#include <iostream>
#include <iomanip>

using namespace std ;

int main ()
{
	comparableF monObjet(3) ;
	comparableM monAutre(4) ;

	// Ici l'opérateur d'égalité est une fonction amie.
	// Donc on peut l'utiliser de manière symmétrique en cas de conversion implicite.

	cout << "Version fonction amie : L'opérateur est symmétrique" << endl ;
	cout << "---------------------" << endl ;
	cout << "L'objet vaut: " << monObjet << endl ;
	cout << boolalpha << "Test d'égalité: (monObjet == 3) -> " << (monObjet == 3) << endl;
	cout << "Test d'égalité: (3 == monObjet) -­> " << (3 == monObjet) <<  endl << endl;

	// Ici l'opérateur d'égalité est un membre.
	// Dans le cas d'une conversion implicit, il n'est pas symmétrique

	cout << "Version fonction membre : L'opérateur n'est pas symmétrique" << endl ;
	cout << "-----------------------" << endl ;
	cout << "L'objet vaut: " << monAutre << endl ;
	cout << "Test d'égalité: (monAutre == 3) -> " << (monAutre == 3) << endl ;
	// cout << "Test d'égalité: (3 == monAutre) -> " << (3 == monAutre) << endl ; // ERREUR! Impossible car fonction membre!

	return 0 ;
}

