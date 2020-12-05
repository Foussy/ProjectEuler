/*
Work out the first ten digits of the sum of the following one-hundred 
50-digit numbers
*/

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <cstring>

std::vector<std::string> readDigits()
{
    std::fstream txtfile;
    std::vector<std::string> fileContent;
    txtfile.open("listDigits.txt", std::ios::in);
    // To open the file in reading mode - ios::in
    // To open the file in writing mode - ios::out
    if (txtfile.is_open())
    {
        std::string line;
        while (std::getline(txtfile, line))
        {
            fileContent.push_back(line);
        }
    }
    txtfile.close();
    return fileContent;
}

long long int sumFirsts(int nDigits, std::vector<std::string> listDigits)
{
    for (auto digits : listDigits)
    {
        char lastTenDigits[digits.size() + 1];
        std::strcpy(lastTenDigits, digits.c_str());
        std::cout << lastTenDigits[-1] << std::endl;
    }
    return 0;
}

int main()
{
    std::cout << sumFirsts(10, readDigits()) << std::endl;
    return 0;
}