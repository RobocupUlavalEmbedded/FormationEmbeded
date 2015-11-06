/*
 * LectureLignes.cpp
 *
 *  Created on: 2015-11-05
 *      Author: loup
 */
int lectureLigne(int *p_pinPhotoCapteur1, int *p_pinPhotoCapteur2){
	int ValeurGauche = analogRead(p_pinPhotoCapteur1);
	int ValeurDroite = analogRead(p_pinPhotoCapteur2);

	signed int erreur = ValeurDroite - ValeurGauche;

	return erreur;

}

