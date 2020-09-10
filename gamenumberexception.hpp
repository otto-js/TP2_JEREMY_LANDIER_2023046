//
//  gamenumberexception.hpp
//  TP2-structuration_des_donnees
//
//  Created by JEREMY OTTO on 2020-08-29.
//  Copyright © 2020 JEREMY OTTO. All rights reserved.
//

#ifndef gamenumberexception_hpp
#define gamenumberexception_hpp

#include <stdio.h>
#include <string>
#include <stdexcept>

class GameNumberException : public std::exception {

   private :
      std::string loginJoueur;
      std::string message;

   public :
      GameNumberException(std::string loginJoueur);
      const char* what() const noexcept;
};

#endif /* gamenumberexception_hpp */

