/*
A palindromic number reads the same both ways. 
The largest palindrome made from the product of 
two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from 
the product of two 3-digit numbers.

answer : 90909
*/

#include <iostream>
#include<string>

bool isPalindrome(int number)
{
    auto strNumber = std::to_string(number);
    int length = strNumber.length();
    int flag = 0;

    for (int i = 0; i < length; i++)
    {
        if (strNumber[i] != strNumber[length - i - 1])
        {
            flag = 1;
            break;
        }
        
    } 
    
    if (flag == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int largestPalindrome(int digits)
{
    std::string str1 = "";
    std::string str2 = "";

    for (int i = 0; i < digits; i++)
    {
        str1.append(std::to_string(9));
        str2.append(std::to_string(9));
    }

    int num1 = std::stoi(str1);
    int num2 = std::stoi(str2);
    int largest = num1;

    for (num1; num1>1; num1--)
    {
        for (num2; num2>1; num2--)
        {
            if (isPalindrome(num1*num2) == true and num1*num2 > largest)
            {
                largest = num1*num2;
                break;
            }            
        }        
    }  
    return largest;    
}

int main()
{
    std::cout << largestPalindrome(3) << std::endl;
    return 0;
}