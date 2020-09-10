//
//  score.hpp
//  TP2-structuration_des_donnees
//
//  Created by JEREMY OTTO on 2020-08-26.
//  Copyright © 2020 JEREMY OTTO. All rights reserved.
//

#ifndef score_hpp
#define score_hpp

#include <stdio.h>
#include <string>

class Score {
  
   private :
      unsigned long identifiant;
      std::string login;
      unsigned long score;

   public :
      Score(unsigned long identifiant, std::string login, unsigned long score) ;
      
      bool operator<(const Score& scoreAComparer) const;
      
      long getIdentifiant() const;
      
      std::string getLogin() const;
      
      long getScore() const;
};

#endif /* score_hpp */
