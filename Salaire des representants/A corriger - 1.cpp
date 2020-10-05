// But: Faire un programme qui calcule les salaires des employés à partir des ventes brutes hebdomadaires
// 
// Auteur : Etudiant du groupe 101
// Date : Cohorte 2016

#include <iostream>  // Inclut la bibliothèque contenant les instructions permettant d'afficher à l'écran ou de lire au clavier

using namespace std; //éviter d'écrire std :: avant les commandes

int main()
{
   setlocale(LC_ALL, ""); 
   // Déclarer des constantes
   const int iSALAIRE = 250;		
   const float fTAUX = 0.075;	
                                     
   float fSalaire;				
   int iTotal;			// Montant total vendu par les employés
   iTotal = 0;			// Mettre la variable de ventes à 0

   while (iTotal != -1)
   {
      // Calcul du salaire des employés
      cout << "Veuillez entrer le montant des ventes de l'employé  ou -1 pour quitter :  "; 
      cin >> iTotal;
      cout << "\n";

      if (iTotal == -1) 
      {
      }
      else
      {
         fSalaire = iSALAIRE + (fTAUX * iTotal);
         cout << "Voici le salaire total de l'employé : " << fSalaire << "\n\n"; 
      }
   }
   system("pause");
}