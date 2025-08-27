// #include "Model.h"
#include "Translator.h"
#include <sstream>

Translator::Translator(){};
Translator::~Translator(){};

std::string Translator::translateEnglishWord(std::string word)
{
    std::string translated = "";
    for (char c : word)
    {
        // checks if char is not a vowel
        if (c!= 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' && c != 'A' && c != 'E' && c != 'I' && c != 'O' && c != 'U')
        {
            translated += model.translateSingleConsonant(c);
            
        } else 
        {
            translated += model.translateSingleVowel(c);
        }
        
        
    }
    return translated;
}

//** BEGIN CODE FROM SOURCE **//
//** Function given by Dr.Eel during office hours **//

// Using input string stream makes it easy to convert strings and other data types
// It is also good for extracting words from a string, so in this case
// it is used to extract the words from each sentence or line in the original.txt

std::string Translator::translateEnglishSentence(std::string sentence)
{   
    // std::cout << "sentence: " << sentence << std::endl; 
    // used to test original sentence

    std::string translatedSentence = ""; // creates empty variable for translated sentence
    std::istringstream iss(sentence); // this will treat "sentence" as an input
    std::string word; // for each word in the sentence

    // loop extracts each word from the input sentence and calls the translating 
    // sentence function, and then adds it into the translated sentence variable
    while(iss >> word){
        translatedSentence += translateEnglishWord(word); 
        translatedSentence += " ";
    }
    // std::cout << "translatedSentence: " << translatedSentence << std::endl;
    // used to test translated sentence

    return translatedSentence;
}

//** END CODE FROM SOURCE **//