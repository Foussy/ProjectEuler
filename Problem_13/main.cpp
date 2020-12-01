/*
Work out the first ten digits of the sum of the following one-hundred 50-digit numbers
*/

#include<iostream>
#include<fstream>
#include<string>
#include<vector>

std::vector <std::string> readDigits()
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
        /* code */
    }
    
}

int main()
{
    std::cout <<  << std::endl;
    return 0;
}