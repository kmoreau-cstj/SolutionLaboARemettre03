// But : L'utilisateur a 5 chances de deviner le chiffre choisi au hasard entre 0 et 100 par l'ordinateur.
// Auteur : Etudiant du groupe 101
// Date : Cohorte2016
#include <iostream>
#include <time.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "");

   const int iNB_CHANCES = 6;
   int iNb;

   int iRandom; // permet de mémoriser le nombre choisi aléatoirement par l’ordinateur
   srand(time(0)); // pour activer l’aléatoire dans le programme
   iRandom = rand() % 101; // l’ordinateur calcule un nombre aléatoire entre 0 et 100 et le stocke dans iRandom
   cout << iRandom;
   // for car on sait le nombre de fois qu'on veut exécuter la boucle.
   for (int iCompteur = 1; (iCompteur < iNB_CHANCES) || (iNb == iRandom); iCompteur++)
   {
      // On demande à l'utilisateur de choisir un entier 
      cout << "Entrer un nombre entier compris entre 0 et 100. Vous avez " << 6 - iCompteur << " chances : ";
      cin >> iNb;

      if (!(iNb == iRandom)) // Pour continuer si l'utilisateur n'a pas la bonne réponse.
      {
         cout << "Ce n'est pas le bon nombre\n";
      }
      else 
      {
         cout << "C'est gagné!\n"; 
         return 0; // Pour arrêter le jeu si l'utilisateur gagne.
      }              
   }
   // La boucle est terminée et tous les essais ont été utilisés.
   cout << "C'était la dernière chance.\n\n";

   // Pour garder le programme ouvert pendant l'utilisation.
   system("pause");
} 
// fin du main