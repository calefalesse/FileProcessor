#ifndef TRANSLATOR_H
#define TRANSLATOR_H

#include <iostream>
#include <string>
#include "Model.h"

class Translator
{
    public:
        Model model;
        // Constructor
        Translator();
        // Destructor
        ~Translator();

        std::string translateEnglishWord(std::string word);
        std::string translateEnglishSentence(std::string line);


};

#endif 
