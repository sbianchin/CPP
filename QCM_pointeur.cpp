#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
	
	string reponseA, reponseB, reponseC;
	reponseA = "La peur des jeux de loterie";
	reponseB = "La peur du noir";
	reponseC = "Le peur du Vendredi 13";

	cout << "Qu'est ce que la 'kenophobie' ? " << endl;  // On pose la question
	cout << "A)  " << reponseA << endl;  // On affiche les propositions de solution
	cout << "B)  " << reponseB << endl;
	cout << "C)  " << reponseC << endl;

	char reponse;
	cout << "Votre reponse (A,B ou C) : ";
	cin >> reponse;  // On recupere la reponse de l'utilisateur

	string *reponseUtilisateur(0);   // Un poiteur qui pointera sur la reponse choisie

	switch(reponse)
	{

		case 'A':
			reponseUtilisateur = &reponseA;  // On deplace le pointeur sur la reponse choisie
			break;

		case 'B':
			reponseUtilisateur = &reponseB;
			break;

		case 'C': 
			reponseUtilisateur = &reponseC;
			break;

	}

	// On veut alors utiliser le pointeur pour afficher la reponse choisie
	//cout << "Vous avez choisi la reponse : " << *reponseUtilisateur << endl;

	return 0;
}