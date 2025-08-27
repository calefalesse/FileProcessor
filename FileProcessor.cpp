#include <fstream>
#include <iostream>
#include <string>
#include "FileProcessor.h"


FileProcessor::FileProcessor(){};
FileProcessor::~FileProcessor(){};

void FileProcessor::processFile(std::string inputFile, std::string outputFile)
{
    // open input and output files
    std::ifstream inFile(inputFile);
    std::ofstream outFile(outputFile);
    // storing line and translated sentence 
    std::string line, translated= "";

    // check if files opened correctly

    if (!inFile.is_open() || !outFile.is_open()) {
        std::cout << "Error opening file.\n" << std::endl;
        return;
    }


    if (outFile.is_open()) {
        

        if (inFile.is_open()) {
            // open html doc
        outFile << "<!DOCTYPE html>\n";
        outFile << "<html>\n" ;
        outFile << "<head>\n";
        outFile << "<title>PA01: Robber Translation</title>\n</head>\n";
        outFile << "<body>\n";
        
            while (getline(inFile, line)) {

                // original in bold 
                outFile << "<p><b>" << line << "</b></p>\n";
   
                // translate original into robber language and store in "translated"
                translated += "<p><i>" + translator.translateEnglishSentence(line) + "</i></p>";


            }
            // blank line
                outFile << "<br>" << "</br>";
            // translated in italics
                outFile << translated ;
        }

        outFile << "</body>" << std::endl;
        outFile << "</html>" << std::endl;
    }

    // close files
    inFile.close();
    outFile.close();
}



