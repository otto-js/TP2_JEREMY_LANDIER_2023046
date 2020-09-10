//
//  score.cpp
//  TP2-structuration_des_donnees
//
//  Created by JEREMY OTTO on 2020-08-26.
//  Copyright © 2020 JEREMY OTTO. All rights reserved.
//

#include "score.hpp"

Score::Score(unsigned long identifiant, std::string login, unsigned long score) {
   this->identifiant = identifiant;
   this->login = login;
   this->score = score;
}

//operator< redéfini avec > pour garder les scores dans l'ordre décroissant
bool Score::operator<(const Score& scoreAComparer) const {
   return this->score > scoreAComparer.score;
}

long Score::getIdentifiant() const{
   return this->identifiant;
}

std::string Score::getLogin() const{
   return this->login;
}

long Score::getScore() const{
   return this->score;
}
