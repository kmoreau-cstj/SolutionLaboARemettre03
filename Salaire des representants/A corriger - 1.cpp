// But: Faire un programme qui calcule les salaires des employ�s � partir des ventes brutes hebdomadaires
// 
// Auteur : Etudiant du groupe 101
// Date : Cohorte 2016

#include <iostream>  // Inclut la biblioth�que contenant les instructions permettant d'afficher � l'�cran ou de lire au clavier

using namespace std; //�viter d'�crire std :: avant les commandes

int main()
{
   setlocale(LC_ALL, ""); 
   // D�clarer des constantes
   const int iSALAIRE = 250;		
   const float fTAUX = 0.075;	
                                     
   float fSalaire;				
   int iTotal;			// Montant total vendu par les employ�s
   iTotal = 0;			// Mettre la variable de ventes � 0

   while (iTotal != -1)
   {
      // Calcul du salaire des employ�s
      cout << "Veuillez entrer le montant des ventes de l'employ�  ou -1 pour quitter :  "; 
      cin >> iTotal;
      cout << "\n";

      if (iTotal == -1) 
      {
      }
      else
      {
         fSalaire = iSALAIRE + (fTAUX * iTotal);
         cout << "Voici le salaire total de l'employ� : " << fSalaire << "\n\n"; 
      }
   }
   system("pause");
}