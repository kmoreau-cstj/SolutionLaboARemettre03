// But : D�veloppez un programme qui entre les ventes brutes hebdomadaires de chaque repr�sentant et qui calcule et affiche son salaire.
//		 Entrez -1 � la valeur des ventes pour quitter le programme. 
//		 
// Auteur : Etudiant du groupe 101
// Date : Cohorte 2016

#include <iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "");

	//D�clarer les variable pour le salaire des repr�sentants
	int iVente;
	float fSalaire;

	//Demander � l'utilisateur d'entrer le co�t des ventes brutes d'un repr�sentant
	cout << "Veuillez entrer les ventes brutes du repr�sentant (-1 pour quitter) : ";
	cin >> iVente;
	if (iVente == -1)	   
	{
		exit(0);
	}
	//Calculer le salaire
	fSalaire = ((250) + ((7.5 / 100) * iVente));
	cout << "Le salaire du repr�sentant est : " << fSalaire << "$\n\n";
	
	//R�p�ter l'op�ration 
	while (!(iVente == -1))
	{
		cout << "Veuillez entrer les ventes brutes du repr�sentant (-1 pour quitter) : ";
		cin >> iVente;
		if (iVente == -1)	
		{
			exit(0);
		}
		//Calculer le salaire
		fSalaire = ((250) + ((7.5 / 100) * iVente));
		cout << "Le salaire du repr�sentant est : " << fSalaire << "$\n\n";
	}
	system("pause");
}