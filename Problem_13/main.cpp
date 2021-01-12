/*
Work out the first ten digits of the sum of the following one-hundred 
50-digit numbers
*/

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <cstring>
#include <stdio.h>

#include <stdlib.h>

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

long long int sumDigits(std::vector<std::string> listDigits)
{
    long long int sum = 0;
    for (auto digits : listDigits)
    {
        char* digit = NULL;
        sum += strtoll(digits, &digit, 10);
    }
    return 0;
}

int main()
{
    sumDigits(readDigits());
    // printf("the ", sumFirsts(10, readDigits()));
    return 0;
}