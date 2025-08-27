#include "Model.h"

Model::Model(){};   //Constructor
Model::~Model(){};  //Destructor

std::string Model::translateSingleConsonant(char c)
{
    // if consonant- add an 'o' between
    std::string newC = "";
    newC += c;
    newC += 'o';
    newC += c;
    return newC;
}

std::string Model::translateSingleVowel(char c)
{
    // if anything else (vowel + punctuation) treat as vowel and return original
    std::string vowel = "";
    vowel += c;
    return vowel;
}