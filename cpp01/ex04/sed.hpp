#pragma once

#include <iostream>
#include <fstream>
#include <string.h>
#include <string>
#include <sstream>

void replace(char **av);
void writeInFile(std::string line, std::ofstream &outputFile, std::string word);
