/**
 * \file comparableF.cpp
 *
 *  Created on: 2020-10-21
 * \author Pascal Charpentier
 */

#include "comparableF.h"

/**
 * Constructeur de la classe: prend un entier
 * Une expression comprenant un objet et un entier pourra donc utiliser une conversion implicite
 */

comparableF::comparableF(int n) : donnee(n) {}

/**
 * Opérateur d'égalité, version fonction amie: compare les deux membres entiers
 */

bool operator ==(const comparableF& gauche, const comparableF& droite)
{
	return gauche.donnee == droite.donnee ;
}

/**
 * Opérateur de stream
 */

std::ostream& operator << (std::ostream& os, const comparableF& obj)
{
	return os << obj.donnee ;
}


