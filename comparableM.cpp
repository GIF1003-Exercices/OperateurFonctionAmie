/*
 * \file comparableM.cpp
 *
 *  Created on: 2020-10-21
 * \author Pascal Charpentier
 */

#include "comparableM.h"

/**
 * Constructeur: prend un entier
 */

comparableM::comparableM(int n) :  donnee(n) {}

/**
 * Opérateur d'égalité, version membre
 */

bool comparableM::operator== (const comparableM& droite) const
{
	return donnee == droite.donnee ;
}

/**
 * Stream de sortie
 */

std::ostream& operator << (std::ostream& os, const comparableM& obj)
{
	return os << obj.donnee ;
}

