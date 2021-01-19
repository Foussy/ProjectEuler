/*
Work out the first ten digits of the sum of the following one-hundred 
50-digit numbers
*/

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <cstring>
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

std::vector<int> sumDigits(std::vector<std::string> listDigits)
{
    std::vector<int> result;
    int additional = 0;
    for (int i = 1; i < 50; i++)
    {
        int sum = additional;
        for (auto digits : listDigits)
        {
            sum += std::stoi(std::string(1, digits[digits.size() - i]), nullptr, 10);
        }
        if (i == 49)
        {
            result.insert(result.begin(), sum);
        }
        else
        {
            result.insert(result.begin(), sum % 10);
            additional = sum / 10;
        } 
    }
    return result;
}

int main()
{
    std::vector<int> v = sumDigits(readDigits());
    std::cout << v[0] << v[1] << v[2] << v[3] << v[4] << v[5] << v[6] << v[7] << std::endl;
    return 0;
}