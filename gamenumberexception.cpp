
//
//  gamenumberexception.cpp
//  TP2-structuration_des_donnees
//
//  Created by JEREMY OTTO on 2020-08-29.
//  Copyright © 2020 JEREMY OTTO. All rights reserved.
//

#include "gamenumberexception.hpp"

GameNumberException::GameNumberException(std::string loginJoueur) {
   this->loginJoueur = loginJoueur;
   this->message = "Erreur, pas de numéro de partie pour le joueur " + loginJoueur;
}

const char* GameNumberException:: what() const noexcept {
   return this->message.c_str();
}
