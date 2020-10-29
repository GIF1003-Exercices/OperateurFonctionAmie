/*
 * comparableM.h
 *
 *  Created on: 2020-10-21
 *      Author: etudiant
 */

#ifndef COMPARABLEM_H_
#define COMPARABLEM_H_

#include <iostream>

/**
 * \class comparableM
 * Classe démonstration pour illustrer les différences entre un opérateur d'égalité
 * défini comme fonction amie et le même opérateur défini comme membre.
 *
 */

class comparableM {
public:
	comparableM(int = 0);

	/** Opérateur d'égalité fonction membre */
	bool operator== (const comparableM&) const ;

	friend std::ostream& operator << (std::ostream&, const comparableM&) ;

private:
	int donnee ;
};

#endif /* COMPARABLEM_H_ */
