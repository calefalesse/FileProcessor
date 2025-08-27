#ifndef FILEPROCESSOR_H
#define FILEPROCESSOR_H

#include <iostream>
#include <fstream>
#include <string>
#include "Translator.h"


class FileProcessor
{
    public:
        // instance of translator class
        Translator translator;
        // Constructor
        FileProcessor();
        // Destructor
        ~FileProcessor();

        void processFile(std::string inputFile, std::string outputFile);
        
};

#endif 
