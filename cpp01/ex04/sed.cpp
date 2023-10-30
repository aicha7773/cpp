#include "sed.hpp"

void replace(char **av)
{
    std::ifstream inputFile(av[1]);
    std::string s = av[1];
    std::ofstream outputFile(s.append(".replace"));

    if (!inputFile.is_open()) {
        std::cout << "Error: Could not open the file." << std::endl;
        return;
    }
    std::string word;
    outputFile << ;
    while (inputFile >> word)
    {
        if (word == av[2])
            std::cout <<av[3]<< std::endl;
        std::cout << word << std::endl;
    }
    inputFile.close();
}
