//
//  main.cpp
//  TP2-structuration_des_donnees
//
//  Created by JEREMY OTTO on 2020-08-12.
//  Copyright © 2020 JEREMY OTTO. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <set>
#include "score.hpp"
#include "gamenumberexception.hpp"


int main(int argc, const char * argv[]) {

//adresse des fichiers pour la lecture et l'écriture
   const char* pathLecture="/users/jeremyotto/documents/hiscore.txt";
   const char* pathEcriture="/users/jeremyotto/documents/asterostorm.txt";

   unsigned long identifiant = 0;
   unsigned long score = 0;
   std::string login = "";

//choix de multiset pour autoriser les doublons dans les scores recueillis
   std::multiset<Score> infoJeu;


   std::ifstream fichierLu(pathLecture);

   if (fichierLu.is_open()){
      while (!fichierLu.eof()){
         try {
         fichierLu >> identifiant;
         fichierLu >> login;
         fichierLu >> score;
            if (identifiant == 0) throw GameNumberException(login);
         Score monJoueur(identifiant, login, score);
         infoJeu.insert(monJoueur);
         } catch (const GameNumberException& valeurNulle) {
         std::cout << valeurNulle.what() << std::endl;
         }
      }
   }
   std::ofstream fichierEcrit(pathEcriture);
   std::multiset<Score>::reverse_iterator iterateurJoueurs;
   if (fichierEcrit.is_open()){
      for (iterateurJoueurs = infoJeu.rbegin(); iterateurJoueurs!=infoJeu.rend(); iterateurJoueurs++){
      fichierEcrit << iterateurJoueurs->getLogin() << std::endl;
      fichierEcrit << iterateurJoueurs->getIdentifiant() << std::endl;
      fichierEcrit << "Asterostorm=" << iterateurJoueurs->getScore() << std::endl;
      }
   }

   fichierLu.close();
   fichierEcrit.close();

return 0;
}
