/*
The four adjacent digits in the 1000-digit number 
that have the greatest product are 9 × 9 × 8 × 9 = 5832.

Find the thirteen adjacent digits in the 1000-digit 
number that have the greatest product. 
What is the value of this product?

answer : 23514624000
*/

#include<iostream>
#include<fstream>
#include<string>

std::string readDigits()
{
    std::fstream txtfile;
    std::string fileContent;
    txtfile.open("1000digits.txt", std::ios::in); 
    // To open the file in reading mode - ios::in
    // To open the file in writing mode - ios::out
    if (txtfile.is_open())
    {
        std::string line;
        while (std::getline(txtfile, line))
        {
            fileContent += line;
        }        
    }
    txtfile.close();
    return fileContent;
}

long long int adjacentProduct(std::string digitList, int nAdjacent)
{
    long long int largest_product = 0, marker = 0;
    do
    {
        long long int result = 1;        
        for (int i = 0; i < nAdjacent; i++)
        {   
            result *= std::stoi(std::string(1, digitList[marker + i]));
        }       
        if (result > largest_product)
        {
            largest_product = result;
        }            
        marker++;  
    } while (marker + nAdjacent <= digitList.size());
    return largest_product;
}

int main()
{   
    std::cout << adjacentProduct(readDigits(), 13) << std::endl;
    return 0;
}
