// But: Calculer le salaire hebdomadaire d'un employ� avec ses ventes. Lorsque l'utilisateur entre -1 dans ses ventes, ceci
// termine le programme.
// Auteur: Etudiant du groupe 101
// Date: Cohorte 2016

#include <iostream> 

using namespace std;

void main()
{
	setlocale(LC_ALL, "");


	// D�finir les constantes
	const int iSALAIRE = 250;
	const float fPOURCENT = 0.075;
	// D�clarer les variables des op�rations.
	int iVente;
	int iSalaireComplet;
   do		
	{
		cout << "\n\nVeuillez entrer les ventes (-1 pour quiter le programme) :";	
		cin >> iVente;		


		if (!(iVente == 1))		
		{
			iSalaireComplet = iSALAIRE + (iVente*fPOURCENT);	
		   cout << "Voici votre salaire entier : " << iSalaireComplet << "$\n";		
		}
	}	 while (!(iVente == 1));
	system("pause");
}
