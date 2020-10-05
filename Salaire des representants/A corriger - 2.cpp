// But : Développez un programme qui entre les ventes brutes hebdomadaires de chaque représentant et qui calcule et affiche son salaire.
//		 Entrez -1 à la valeur des ventes pour quitter le programme. 
//		 
// Auteur : Etudiant du groupe 101
// Date : Cohorte 2016

#include <iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "");

	//Déclarer les variable pour le salaire des représentants
	int iVente;
	float fSalaire;

	//Demander à l'utilisateur d'entrer le coût des ventes brutes d'un représentant
	cout << "Veuillez entrer les ventes brutes du représentant (-1 pour quitter) : ";
	cin >> iVente;
	if (iVente == -1)	   
	{
		exit(0);
	}
	//Calculer le salaire
	fSalaire = ((250) + ((7.5 / 100) * iVente));
	cout << "Le salaire du représentant est : " << fSalaire << "$\n\n";
	
	//Répéter l'opération 
	while (!(iVente == -1))
	{
		cout << "Veuillez entrer les ventes brutes du représentant (-1 pour quitter) : ";
		cin >> iVente;
		if (iVente == -1)	
		{
			exit(0);
		}
		//Calculer le salaire
		fSalaire = ((250) + ((7.5 / 100) * iVente));
		cout << "Le salaire du représentant est : " << fSalaire << "$\n\n";
	}
	system("pause");
}