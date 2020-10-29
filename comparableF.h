/*
 * comparableF.h
 *
 *  Created on: 2020-10-21
 *      Author: etudiant
 */

#ifndef COMPARABLEF_H_
#define COMPARABLEF_H_

#include <iostream>

/**
 * \class comparableF
 * Classe démonstration pour illustrer les différences entre un opérateur défini
 * comme fonction amie et le même opérateur défini comme membre.
 * L'objet est essentiellement un entier.
 */

class comparableF {
public:
	comparableF(int = 0) ;

	friend bool operator== (const comparableF&, const comparableF&) ;
	friend std::ostream& operator << (std::ostream& os, const comparableF& obj) ;


private:
	int donnee ;
};

#endif /* COMPARABLEF_H_ */
