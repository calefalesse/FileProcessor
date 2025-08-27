#ifndef MODEL_H
#define MODEL_H
#include <iostream>
#include <string>

class Model
{
    public:
        // Constructor
        Model();
        // Destructor
        ~Model();

        std::string translateSingleConsonant(char c);
        std::string translateSingleVowel(char c);
};

#endif