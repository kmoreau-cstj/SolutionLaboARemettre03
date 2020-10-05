// But: D�velopper un programme qui entre les ventes brutes hebdomadaires  de chaque repr�sentant et qui calcule et affiche son salaire. Entrer -1 � la valeur des ventes pour quitter le programme.
// Auteur: Etudiant du groupe 101
// Date : Cohorte 2016

#include <iostream>

using namespace std; 

void main() 
{
   setlocale(LC_ALL, ""); 
   //Pour la constante
   float fSalaire = 250;
   int iNbRep = 1;
   float fMontVente;
   float fComm = 0.075;
   float fInter;
   do
   {
      cout << "Veuillez entrer le montant des ventes pour le repr�sentant # " << iNbRep << "\n";
      cout << "Inscrivez -1 pour quitter le programme : ";
      cin >> fMontVente;
      cout << "\n";

	  //Si l'utilisateur �crit -1, la condition du if sera vraie et permettra � l'utilisateur de quitter.
      if (fMontVente == -1)
      {
         exit(1); //Permet de quitter.
      }
      else
      {
         if (fMontVente >= 0) //Si l'utilisateur entre un montant de vente en haut du 0, la condition est vraie et le calcul se met en marche.
         {
            cout << fMontVente << " * " << fComm << " = ";
            fInter = (fMontVente * fComm) + fSalaire; //Le salaire inclu la commission sur la vente + le salaire initial de 250$.
            cout << fInter << "\n";
            iNbRep++; //Permet d'afficher le prochain num�ro du repr�sentant.
         }
      }
    } while (1); //La boucle while sera toujours vrai � cause de la condition 1 qui veut dire en binaire "Vrai". 
 
   system("pause"); // Mettre le syst�me en pause.
}